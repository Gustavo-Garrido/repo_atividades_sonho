#!/bin/bash

# =========================
# CORES
# =========================
VERDE="\e[32m"
AMARELO="\e[33m"
VERMELHO="\e[31m"
RESET="\e[0m"

# =========================
# DADOS DO ROBÔ
# =========================
robo="roboB"
bateria=15
sinal=45
missao="emergencia"

# =========================
# FUNÇÃO: VERIFICAR BATERIA
# =========================
verificar_bateria() {

    local bateria=$1

    if [ $bateria -ge 80 ]; then

        texto="OK"
        codigo=0
        cor=$VERDE

    elif [ $bateria -ge 20 ]; then

        texto="ATENCAO"
        codigo=1
        cor=$AMARELO

    else

        texto="CRITICO"
        codigo=2
        cor=$VERMELHO

    fi

    echo -e "Bateria (${bateria}%):\t${cor}${texto}${RESET}"

    return $codigo
}

# =========================
# FUNÇÃO: VERIFICAR CONEXAO
# =========================
verificar_conexao() {

    local sinal=$1

    if [ $sinal -ge 70 ]; then

        texto="Estavel"
        codigo=0
        cor=$VERDE

    elif [ $sinal -ge 30 ]; then

        texto="Instavel"
        codigo=1
        cor=$AMARELO

    else

        texto="Sem sinal"
        codigo=2
        cor=$VERMELHO

    fi

    echo -e "Conexao (${sinal}%):\t${cor}${texto}${RESET}"

    return $codigo
}

# =========================
# FUNÇÃO: CLASSIFICAR MISSAO
# =========================
classificar_missao() {

    local missao=$1

    if [[ "$missao" == "patrulha" || "$missao" == "mapeamento" || "$missao" == "coleta" ]]; then

        texto="Operacional"
        codigo=0
        cor=$VERDE

    elif [[ "$missao" == "recarga" || "$missao" == "manutencao" ]]; then

        texto="Em pausa"
        codigo=1
        cor=$AMARELO

    elif [ "$missao" == "emergencia" ]; then

        texto="Emergencia"
        codigo=2
        cor=$VERMELHO

    else

        texto="Desconhecida"
        codigo=2
        cor=$VERMELHO

    fi

    echo -e "Missao (${missao}):\t${cor}${texto}${RESET}"

    return $codigo
}

# =========================
# FUNÇÃO: DIAGNÓSTICO GERAL
# =========================
diagnostico_geral() {

    local cod_bat=$1
    local cod_con=$2
    local cod_mis=$3

    local soma=$((cod_bat + cod_con + cod_mis))

    echo ""

    if [ $soma -eq 0 ]; then

        echo -e "${VERDE}Robo operando normalmente${RESET}"

    elif [ $soma -le 2 ]; then

        echo -e "${AMARELO}Robo requer atencao${RESET}"

    else

        echo -e "${VERMELHO}Robo em situacao critica${RESET}"

    fi
}

# =========================
# EXECUÇÃO
# =========================
echo "=== Diagnostico: $robo ==="
echo ""

verificar_bateria $bateria
cod_bat=$?

verificar_conexao $sinal
cod_con=$?

classificar_missao $missao
cod_mis=$?

diagnostico_geral $cod_bat $cod_con $cod_misch