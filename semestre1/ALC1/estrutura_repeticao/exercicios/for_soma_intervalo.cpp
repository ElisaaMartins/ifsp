// Elabore um programa que calcule a soma do intervalo numérico informado pelo usuário, ou seja, o usuário deverá informar o valor inicial e final do intervalo da soma.
#include <iostream>

using namespace std;

int main(){
    int temporaria, vInicial, vFinal, soma = 0;

    cout << "Informe um numero inicial" << endl;
    cin >> vInicial;

    cout << "Informe um numero final" << endl;
    cin >> vFinal;

    if (vInicial > vFinal){
        temporaria = vInicial;
        vInicial= vFinal;
        vFinal = temporaria;
    }

    for(int i = vInicial; i <= vFinal; i++)
    {
        soma += i; // soma = soma + i
    }


    cout << "O valor do intervalo de: " << vInicial << " ate " << vFinal << " e " << soma << endl;
}
