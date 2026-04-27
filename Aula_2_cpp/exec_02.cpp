#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float temp{};
    float F{};
    float K{};
    cout << "Digite a temperatura em Celsius: " << endl;
    cin >> temp;
    
    F = (temp * (9.0/5))+32;
    K = temp + 273.15;
    cout << setfill('=') << setw(34) << "" << endl; 
    cout << "  Conversão de Temperatura" << endl;
    cout << setfill('=') << setw(34) << "" << endl; 

    cout << fixed << setprecision(2);

    cout << setw(15) << setfill(' ')<< left;
    cout << setw(16) << "  Celsius: " << setw(3) << temp << " °C" << endl;
    cout << setw(16) << "  Fahrenheit: " << setw(3) << F << " °F" << endl;
    cout << setw(15) << "  Kelvin: " << setw(6) << K <<" K" << endl;
    cout << setfill('=') << setw(34) << "" << endl; 
    
    return 0;
}