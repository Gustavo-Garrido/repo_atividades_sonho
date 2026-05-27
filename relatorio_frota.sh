
#!/bin/bash

# =========================
# CORES
# =========================
VERDE="\e[32m"
AMARELO="\e[33m"
VERMELHO="\e[31m"
RESET="\e[0m"

# =========================
# CONTADORES GLOBAIS
# =========================
saudavel=0
degradado=0
critico=0

# =========================
# ARQUIVO RELATÓRIO
# =========================
mkdir -p relatorios

arquivo="relatorios/relatorio_frota.txt"

# LIMPA O ARQUIVO
> $arquivo

# =========================
# FUNÇÃO VALIDAR
# =========================
validar_ambiente() {

    if [ $# -eq 0 ] || [ $(($# % 4)) -ne 0 ]; then

        echo -e "${VERMELHO}Erro nos argumentos.${RESET}"

        echo "Uso:"
        echo "./relatorio_frota.sh <robo> <erros> <fatais> <criticos>"

        exit 1
    fi
}

# =========================
# FUNÇÃO EXIBIR ROBÔ
# =========================
exibir_robo() {

    local robo=$1
    local erros=$2
    local fatais=$3
    local criticos_qtd=$4
    local status=$5
    local cor=$6

    # TERMINAL
    echo -e "Robo: $robo\tStatus: ${cor}$status${RESET}"

    echo -e "\terror:\t\t$erros"
    echo -e "\tfatal:\t\t$fatais"
    echo -e "\tcritical:\t$criticos_qtd"

    echo ""

    # ARQUIVO TXT
    {
        echo "--- $robo ---"
        echo "Status:    $status"
        echo "error:     $erros"
        echo "fatal:     $fatais"
        echo "critical:  $criticos_qtd"
        echo ""
    } >> $arquivo
}

# =========================
# FUNÇÃO ANALISAR ROBÔ
# =========================
analisar_robo() {

    local robo=$1
    local erros=$2
    local fatais=$3
    local criticos_qtd=$4

    soma=$((fatais + criticos_qtd))

    if [ $soma -eq 0 ]; then

        status="SAUDAVEL"
        cor=$VERDE

        ((saudavel++))

    elif [ $soma -le 4 ]; then

        status="DEGRADADO"
        cor=$AMARELO

        ((degradado++))

    else

        status="CRITICO"
        cor=$VERMELHO

        ((critico++))

    fi

    exibir_robo $robo $erros $fatais $criticos_qtd "$status" "$cor"
}

# =========================
# VALIDAÇÃO
# =========================
validar_ambiente "$@"

# =========================
# CABEÇALHO
# =========================
echo "=== Relatorio Consolidado da Frota ==="

data=$(date +"%Y-%m-%d %H:%M:%S")

echo "Data: $data"

echo ""

# CABEÇALHO NO TXT
{
    echo "=== Relatorio Consolidado da Frota ==="
    echo "Data: $data"
    echo ""
} >> $arquivo

# =========================
# PROCESSAMENTO
# =========================
while [ $# -gt 0 ]
do

    robo=$1
    erros=$2
    fatais=$3
    criticos_qtd=$4

    analisar_robo $robo $erros $fatais $criticos_qtd

    shift 4

done

# =========================
# RESUMO FINAL
# =========================
echo "=== Resumo Final ==="

echo -e "${VERDE}SAUDAVEL:\t${saudavel} robo(s)${RESET}"

echo -e "${AMARELO}DEGRADADO:\t${degradado} robo(s)${RESET}"

echo -e "${VERMELHO}CRITICO:\t${critico} robo(s)${RESET}"

# RESUMO TXT
{
    echo "=== Resumo Final ==="
    echo "SAUDAVEL:   $saudavel robo(s)"
    echo "DEGRADADO:  $degradado robo(s)"
    echo "CRITICO:    $critico robo(s)"
} >> $arquivo