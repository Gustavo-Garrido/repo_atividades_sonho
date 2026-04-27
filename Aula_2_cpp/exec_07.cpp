#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valorHora, horasMes;
    double salarioBruto, inss, irrf, sindicato, vt;
    double totalDescontos, salarioLiquido, fgts;

    cout << "Digite o valor da hora trabalhada e em seguida a quantidade de horas trabalhada" << endl;
    cin >> valorHora >> horasMes;


    salarioBruto = valorHora * horasMes;

    inss = salarioBruto * 0.11;
    irrf = salarioBruto * 0.15;
    sindicato = salarioBruto * 0.01;
    vt = salarioBruto * 0.06;

    totalDescontos = inss + irrf + sindicato + vt;
    salarioLiquido = salarioBruto - totalDescontos;

    fgts = salarioBruto * 0.08;

    cout << fixed << setprecision(2);

    cout << "Salario Bruto:            R$ " << salarioBruto << endl;
    cout << "(-) INSS (11%):           R$  " << inss << endl;
    cout << "(-) IRRF (15%):           R$ " << irrf << endl;
    cout << "(-) Sindicato (1%):       R$   " << sindicato << endl;
    cout << "(-) Vale Transporte (6%): R$  " << vt << endl;
    cout << setfill('=') << setw(36) << "" << endl; 
    cout << "Total de Descontos:       R$ " << totalDescontos << endl;
    cout << "Salario Liquido:          R$ " << salarioLiquido << endl;
    cout << setfill('=') << setw(36) << "" << endl; 
    cout << "FGTS Recolhido (8%):      R$  " << fgts << endl;

    return 0;
}