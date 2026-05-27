#!/bin/bash

# =========================
# CORES
# =========================
VERDE="\e[32m"
AMARELO="\e[33m"
VERMELHO="\e[31m"
RESET="\e[0m"

# =========================
# ARRAYS
# =========================
robos=("roboA" "roboB" "roboC" "roboZ")

tarefas=("patrulha" "recarga" "mapeamento" "coleta")

baterias=(87 15 43 95)

# =========================
# CONTADORES
# =========================
ok=0
atencao=0
critico=0

# =========================
# CABEÇALHO
# =========================
echo -e "Robo\tTarefa\t\tBateria\t Status"
echo "------------------------------------------------"

# =========================
# LOOP
# =========================
for i in ${!robos[@]}
do

    robo=${robos[$i]}
    tarefa=${tarefas[$i]}
    bateria=${baterias[$i]}

    # CLASSIFICAÇÃO
    if [ $bateria -ge 80 ]; then

        status="OK"
        cor=$VERDE
        ((ok++))

    elif [ $bateria -ge 20 ]; then

        status="Atencao"
        cor=$AMARELO
        ((atencao++))

    else

        status="Critico"
        cor=$VERMELHO
        ((critico++))

    fi

    # AJUSTE DA TABULAÇÃO
    if [ ${#tarefa} -lt 8 ]; then
        tab="\t\t"
    else
        tab="\t"
    fi

    # LINHA DA TABELA
    echo -e "$robo\t$tarefa${tab}${bateria}%\t ${cor}$status${RESET}"

done

# =========================
# RESUMO
# =========================
echo ""
echo "Resumo da frota:"

echo -e "${VERDE}OK:\t\t${ok} robo(s)${RESET}"

echo -e "${AMARELO}Atencao:\t${atencao} robo(s)${RESET}"

echo -e "${VERMELHO}Critico:\t${critico} robo(s)${RESET}"