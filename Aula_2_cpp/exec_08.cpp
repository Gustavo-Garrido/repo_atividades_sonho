#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R, V, t;
    double corrente, potencia, energia;


    cout << "Digite a resistência (ohms): ";
    cin >> R;

    cout << "Digite a tensão (volts): ";
    cin >> V;

    cout << "Digite o tempo (horas): ";
    cin >> t;


    corrente = V / R;                 
    potencia = V * corrente;         
    energia = (potencia * t) / 1000; 

    cout << internal;
    cout << setfill('=') << setw(36) << "" << endl; 
    cout << "Circuito Elétrico" << endl;
    cout << setfill('=') << setw(36) << "" << endl; 

    cout << fixed << setprecision(2);

    cout << setfill('.') << left;
    cout << setw (25) << "Resistência" << R << " ohms" << endl;
    cout << setw (25) << "Tensão" << V << " V" << endl;
    cout << setw (24) << "Corrente" << corrente << " A" << endl;
    cout << setw (25) << "Potência " << potencia << " W" << endl;
    cout << setw (24) << "Tempo" << t << " h" << endl;
    cout << setw (24) << "Energia consumida" << energia << " kWh" << endl;

    cout << setfill('=') << setw(36) << "" << endl; 

    return 0;
}