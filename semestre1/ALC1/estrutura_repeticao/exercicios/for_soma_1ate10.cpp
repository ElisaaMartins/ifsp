//Elabore um programa que calcule a soma dos números de 1 a 10.

#include <iostream>

using namespace std;

int main(){

    //variavel acumuladora
    int soma = 0;

    for (int i = 1; i <= 10; i++){
        soma += i; // soma = soma + i
    }
    cout << soma << "\n";

    return 0;
}

