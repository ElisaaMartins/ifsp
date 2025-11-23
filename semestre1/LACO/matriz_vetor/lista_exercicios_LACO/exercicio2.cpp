/* 2. Faça um programa que receba do usuário um vetor com 10 posições. Em 
seguida deverá ser impresso o maior e o menor elemento do vetor*/

#include <iostream>
using namespace std;

int main() {
	int vet[10];
	int maior, menor;
	//maior = menor = vet[0];

	cout << "Digite um valor:" << endl;
	cin >> vet[10];
	
    for (int i = 0; i < 10; i++) {
       cin >> vet[i];
    }
	
	// Verificar o maior valor
    for (int i = 1; i < 10; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
        else if (vet[i] < menor) {
            menor = vet[i];
        }
    }
    
    cout << endl;
    
    cout << "maior: "  << maior << endl;
    cout << "menor: "  << menor << endl;
}

