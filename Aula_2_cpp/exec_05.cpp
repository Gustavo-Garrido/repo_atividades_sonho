#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num{};
    int milhar{};
    int centena{};
    int dezena{};
    int unidade{};
    int resto{};

    cout << "Digite um número de 4 digitos: ";
    cin >> num;
    
    milhar = num/1000;
    resto = num%1000;

    centena = resto/100;
    resto = resto % 100;

    dezena = resto/10;
    unidade = resto % 10;
    
    cout << left;
    cout << setw(20) << "Digito 1 (milhar): " << milhar << endl;
    cout << "Digito 2 (centena): " << centena << endl;
    cout << setw(20) << "Digito 3 (dezena): " << dezena << endl;
    cout << "Digito 4 (unidade): " << unidade << endl;


    return 0;
}