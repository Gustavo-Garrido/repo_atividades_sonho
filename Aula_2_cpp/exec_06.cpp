#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Digite um numero de 3 digitos: ";
    cin >> num;

    int centena = num / 100;
    int dezena = (num / 10) % 10;
    int unidade = num % 10;

    int invertido = unidade * 100 + dezena * 10 + centena;

    cout << "Numero original: " << num << endl;
    cout << "Numero invertido: " << invertido << endl;

    return 0;
}