/* Faça um programa que leia tres valores inteiros e chame uma função que receba estes 3  valores de entrada
e retorne eles ordenados, ou seja,
    o menor valor na primeira variavel,
    o segundo menor valor na variavel do meio,
    e o maior valor na última variável.
A função deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela. */

#include <iostream>

int retornaValor(int *v1, int *v2, int *v3){
    int temp;

    if (*v1 > *v2){
        temp = *v1;
        *v1 = *v2;
        *v2 = temp;
    }

    if  (*v1 > *v3){
        temp = *v1;
        *v1 = *v3;
        *v3 = temp;
    }

    if (*v2 > *v3){
        temp = *v2;
        *v2 = *v3;
        *v3 = temp;
    }

    if (*v1 == *v2 && *v2 == *v3){
        return 1;
    }
    else {
        return 0;
    }
}

using namespace std;

int main(){
    int v1, v2, v3;

    cout << "Insira um valor para comparacao: ";
    cin >> v1;

    cout << "Insira um valor para comparacao: ";
    cin >> v2;

    cout << "Insira um valor para comparacao: ";
    cin >> v3;

    cout << endl;

    int ordena = retornaValor(&v1, &v2, &v3);

    cout << "\tValores ordenados: " << v1 << " " << v2 << " " << v3 << endl;

    cout << endl;

    if(ordena == 1){
        cout << "\tReturn 1 - valores iguais" << endl;
    }
    else {
        cout << "\tReturn 0 - valores diferentes" << endl;
    }
}
