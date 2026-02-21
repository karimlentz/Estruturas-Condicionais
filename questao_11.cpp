#include <iostream>

using namespace std;

int main(){

    int genero=0, idade_atual=0;
    float anos_trabalhados=0, idade_aposentadoria=0;

    cout << "Insira 1 para gênero masculino ou 0 para feminino: " << endl;
    cin >> genero;
    
    cout << "Qual a sua idade?" << endl;
    cin >> idade_atual;
    
    cout << "Quantos anos de trabalho possui?" << endl;
    cin >> anos_trabalhados;

    if (genero == 0){ //mulher
        if (anos_trabalhados > 15){

            idade_aposentadoria = 30 - anos_trabalhados;
            idade_aposentadoria += (idade_aposentadoria * 0.3);
            idade_aposentadoria += idade_atual;

        } else {
            idade_aposentadoria = 62;  
        }

    } else if (genero == 1){ //homem
        if (anos_trabalhados > 20){

            idade_aposentadoria = 30 - anos_trabalhados;
            idade_aposentadoria += (idade_aposentadoria * 0.3);
            idade_aposentadoria += idade_atual;

        } else {
            idade_aposentadoria = 65;
        }

    } else {
        cout << "Gênero inválido" << endl;
    }

    cout << "Idade de aposentadoria: " << idade_aposentadoria << endl;

    return 0;
}
