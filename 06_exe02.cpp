#include <iostream>
#include <vector>
#include <utility>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    vector<pair<float, float>> coords;

    cout << "Insira as coordenadas: (0 0 para parar)" << endl;

    pair<float,float> temp;

    while (true){ 

        cin >> temp.first >> temp.second;
     
        if(temp.first == 0 && temp.second == 0){
            break;
        } 

        coords.push_back(temp);
    }

    float total = 0;

    cout << fixed << setprecision(2);

    for(int i = 0; i < coords.size() - 1; i++){

        float x1 = coords[i].first;
        float y1 = coords[i].second;

        float x2 = coords[i+1].first;
        float y2 = coords[i+1].second;

        float distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

        cout << "Trecho " << i+1 << ": Distancia = " << distancia << endl;

        total += distancia;
    }

    cout << "\nDistancia total: " << total << endl;

    return 0;
}