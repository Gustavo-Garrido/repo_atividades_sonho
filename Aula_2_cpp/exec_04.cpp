#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int tempo{};
    int resto{};
    int minutos{};
    int segundos{};
    int horas{};

    cout << "Digite o tempo em segundos: " << endl;
    cin >> tempo;
    
    horas = tempo/3600;
    resto = tempo%3600;

    minutos = resto/60;
    segundos = resto % 60;

    cout<< tempo << " segundos equivalem a: " << horas << "h " << minutos << "m " << segundos << "s" << endl;

    return 0;
}