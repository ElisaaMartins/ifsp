/* 3. Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a 
quantidade de números negativos e a soma dos números positivos desse vetor.*/

#include <iostream>
using namespace std;

int main() {
	int vet[10];
	int positivo = 0, negativo = 0;

	cout << "Digite um valor:" << endl;
	//cin >> vet[10];
	
    for (int i = 0; i < 10; i++) {
       cin >> vet[i];
    }
	
	// Verificar o positivo e negativo
    for (int i = 0; i < 10; i++) {
        if (vet[i] > 0) {
            positivo += vet[i];
        }
        else if (vet[i] < 0) {
            negativo++;            
        }
    }
    
    cout << "soma dos positivos: " << positivo << endl;
    cout << "quantidaade de negativos: " << negativo << endl;


}

