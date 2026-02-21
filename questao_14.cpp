#include <iostream>

using namespace std;

int main(){

    string cor1, cor2;
    int N; //6 algarismos 

    cin >> cor1 >> cor2 >> N;
    
    int alg1=0, alg2=0, alg3=0, alg4=0, alg5=0, alg6=0;
    alg1 = N / 100000;
    alg2 = (N%100000) / 10000;
    alg3 = (N%10000) / 1000;
    alg4 = (N%1000) / 100;
    alg5 = (N%100) / 10;
    alg6 = (N%10);

    if ((alg1==alg6)&&(alg2==alg5)&&(alg3==alg4)){
        cout << cor1 << endl;
    } else {
        cout << cor2 << endl;
    }    

    return 0;
}
