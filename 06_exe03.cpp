#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, int> erros;

    int id;

    cout << "Digite os IDs (-1 para parar):" << endl;

    while (true) {

        cin >> id;

        if (id == -1) {
            break;
        }

        erros[id]++;
    }

    cout << "\n--- Relatorio de Erros ANYmal ---\n";

    for (auto [componente, quantidade] : erros) {

        cout << "Componente [" << componente << "]: " << quantidade;

        if (quantidade == 1) {
            cout << " falha detectada.";
        }
        else {
            cout << " falhas detectadas.";
        }

        cout << endl;
    }

    return 0;
}