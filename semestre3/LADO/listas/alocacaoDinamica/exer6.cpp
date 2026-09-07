/* Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar
em um vetor de double, depois use a função NEW para reservar (alocar) o
espaço de memória de acordo com o especificado pelo usuário.
Esse vetor deve ter um tamanho maior ou igual a 10 elementos.
Use este vetor dinâmico como um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores
aleatórios (usando a função rand) entre 0 e 100. Exiba na tela os valores
armazenados nos 10 primeiros elementos do vetor. */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int tamanho;

    cout << "Tamanho do vetor (minimo 10): ";
    cin >> tamanho;

    if(tamanho < 10){
        cout << "Erro! Valor minimo eh 10" << endl;
        return 1;
    }

    double* vetor = new double[tamanho];

    srand(time(NULL)); // para numeros aleatorios

    for(int i = 0; i < 10; i++){
        vetor[i] = rand() % 101; // 101 para que a divisao fique entre 0 e 100
    }

    cout << "==== os 10 primeiros elementos aleatorios ====" << endl;
    for(int i = 0; i < 10; i++){
        cout << "Elemento " << i << ": " << vetor[i] << endl;
    }

    delete[] vetor;
}
