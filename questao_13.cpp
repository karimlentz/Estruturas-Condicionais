#include <iostream>

using namespace std;

int main(){

    float picanha=28.90, alcatra=19.90, linguica=7.95, espetinho=2.99, sal=1.50, farinha=1.85, carvao=8.70;
    int qtd_picanha=0, qtd_alcatra=0, qtd_linguica=0, qtd_espetinho=0, qtd_sal=0, qtd_farinha=0, qtd_carvao=0;

    cout << "Picanha:" << endl;
    cin >> qtd_picanha;
    cout << "Alcatra:" << endl;
    cin >> qtd_alcatra;
    cout << "Linguiça:" << endl;
    cin >> qtd_linguica;
    cout << "Espetinho:" << endl;
    cin >> qtd_espetinho;
    cout << "Sal:" << endl;
    cin >> qtd_sal;
    cout << "Farinha:" << endl;
    cin >> qtd_farinha;
    cout << "Carvão:" << endl;
    cin >> qtd_carvao;

    float total=0, desconto=0, final=0;

    total = ((picanha*qtd_picanha)+(alcatra*qtd_alcatra)+(linguica*qtd_linguica)+(espetinho*qtd_espetinho)+(sal*qtd_sal)+(farinha*qtd_farinha)+(carvao*qtd_carvao));
    if (total > 200){
        desconto = ((total)-(total * 0.90));
    } else {
        desconto = ((total)-(total * 0.95));
    }

    final = total - desconto;

    cout << "Valor total da compra: " << total << endl;
    cout << "Valor do desconto: " << desconto << endl;
    cout << "Valor final da compra: " << final << endl;

    return 0;
}
