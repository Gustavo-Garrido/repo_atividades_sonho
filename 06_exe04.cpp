#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

    vector<vector<float>> setores;

    vector<float> salaAtual;

    float valor;

    cout << "Digite os valores:\n";

    while (true) {

        cin >> valor;

        if (valor == -2) {

            if (!salaAtual.empty()) {
                setores.push_back(salaAtual);
            }

            break;
        }

        else if (valor == -1) {

            setores.push_back(salaAtual);

            salaAtual.clear();
        }

        else {

            salaAtual.push_back(valor);
        }
    }

    cout << fixed << setprecision(2);

    cout << "\n--- Relatorio de Varredura Multissetorial ---\n";

    for (int i = 0; i < setores.size(); i++) {

        cout << "Setor [" << i << "]: ";

        int qtd = setores[i].size();

        cout << qtd;

        if (qtd == 1) {
            cout << " obstaculo encontrado. ";
        }
        else {
            cout << " obstaculos encontrados. ";
        }

        cout << "Dados: ";

        for (float distancia : setores[i]) {

            cout << "[ " << distancia << " ] ";
        }

        cout << endl;
    }

    cout << "\nStatus: Processamento do mapa finalizado.\n";

    return 0;
}