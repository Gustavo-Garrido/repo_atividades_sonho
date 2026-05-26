#include <iostream> 
#include <vector> 
#include <iomanip>

using namespace std;

int main(){

    vector <float> amostras;
    float entrada;
    float variacao;

    cout << "-=-=- REGISTRO DE BATERIA -=-=-" << endl;
    cout << "Digite a porcentagem de bateria (0 para encerrar)" << endl;
    
    while(true){
        cin >> entrada;

        if(entrada == 0){break;}
        amostras.push_back(entrada);
    }
    variacao = amostras.at(0) - amostras.at(amostras.size()-1);

    cout << "--- Telemetria Spot ---" << endl;
    cout << "Amostras coletadas: " << amostras.size() << endl;
    cout << fixed << setprecision(2) << "Variação: " << variacao << " V" << endl;
    
    return 0;
}