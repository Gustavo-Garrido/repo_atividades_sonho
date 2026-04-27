#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int num1{42};
    short num2{100};
    long long num3{500000};
    float num4{3.14};
    double num5{2.72};
    char car1{'A'};
    bool valor{true};


    cout << setfill('=') << setw(34) << "" << endl; 

    cout << setfill(' ') << setw(5) << "Tipo" << setw(15) << "Valor" << setw(12) << "Bytes" << endl;

    cout << setfill('=') << setw(34) << "" << endl;
    
    cout << setfill(' ') << setw(4) << "int" << setw(16) << num1 << setw(12) << sizeof(num1) << endl;

    cout << setw(6) << "short" << setw(14) << num2 << setw(12) << sizeof(num2) << endl;

    cout << setw(10) << "long long" << setw(10) << num3 << setw(12) << sizeof(num3) << endl;

    cout << setw(6) << "float" << setw(14) << num4 << setw(12) << sizeof(num4) << endl;

    cout << setw(7) << "double" << setw(13) << num5 << setw(12) << sizeof(num5) << endl;

    cout << setw(5) << "char" << setw(15) << car1 << setw(12) << sizeof(car1) << endl;

    cout << setw(5) << "bool" << setw(15) << valor << setw(12) << sizeof(valor) << endl;

    cout << setfill('=') << setw(34) << "" << endl;

    return 0;
}