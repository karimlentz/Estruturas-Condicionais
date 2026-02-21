#include <iostream>

using namespace std;

int main(){

    float v_trem1=0, v_trem2=0, distancia=0, tempo=0;

    cout << "Velocidade trem 1: " << endl;
    cin >> v_trem1;
    cout << "Velocidade trem 2: " << endl;
    cin >> v_trem2;
    cout << "Distância entre os trens: " << endl;
    cin >> distancia;

    tempo = (distancia/(v_trem1+v_trem2));

    if (tempo <= 10) {
        cout << "COLISAO" << endl;
    } else{
        cout << tempo << endl;
    }

    return 0;
}
