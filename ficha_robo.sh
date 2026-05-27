#!/bin/bash

nome="Gustavo"
curso="Engenharia Mecatônica"
cidade="São Carlos"
usuario=$USER
data=$(date +"%Y-%m-%d")

# CORES
VERDE="\033[32m"
AMARELO="\033[33m"
VERMELHO="\033[31m"
RESET="\033[0m"

# VALIDAÇÃO DOS ARGUMENTOS
if [ $# -lt 2 ]; then
    echo -e "${VERMELHO}Erro: argumentos insuficientes.${RESET}"
    echo "Uso: ./ficha_robo.sh <nome_robo> <bateria>"
    exit 1
fi

# ARGUMENTOS
robo=$1
bateria=$2

# CLASSIFICAÇÃO DA BATERIA
if [ $bateria -ge 80 ]; then
    status="Bateria OK"
    cor=$VERDE

elif [ $bateria -ge 20 ]; then
    status="Bateria em atenção"
    cor=$AMARELO

else
    status="Bateria crítica"
    cor=$VERMELHO
fi

# SAÍDA
echo "=============================="
echo "      FICHA DO OPERADOR"
echo "=============================="

echo "Nome: $nome"
echo "Curso: $curso"
echo "Cidade: $cidade"
echo "Usuário: $usuario"
echo "Data: $data"e\n

echo "===== STATUS DO ROBÔ ====="

echo "Robô: $robo"
echo "Bateria: ${bateria}%"
echo -e "Status: ${cor}${status}${RESET}"