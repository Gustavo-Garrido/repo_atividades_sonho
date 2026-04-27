#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float velo1{};
    float velo2{};
    float velo3{};
    cout << "Digite a Velocidade em km/h: " << endl;
    cin >> velo1;
    
    velo2 = velo1/3.6;
    velo3 = velo1/1.609;
    cout << setfill('=') << setw(27) << "" << endl; 
    cout << "  Conversão de Velocidade" << endl;
    cout << setfill('=') << setw(27) << "" << endl; 

    cout << fixed << setprecision(2);

    cout << setw(15) << setfill(' ')<< left;
    cout << setw(17) << "  km/h: " << velo1  << endl;
    cout << setw(18) << "  m/s: " << velo2 << endl;
    cout << setw(18) << "  mph: " << velo3 << endl;
    cout << setfill('=') << setw(27) << "" << endl; 
    
    return 0;
}