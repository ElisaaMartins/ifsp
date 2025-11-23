// 1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.
#include <iostream>
using namespace std;

int main() {
	// (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7. 
	int a[6] = {1, 0, 5, -2, -5, 7};
	
	/* (b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor 
	e mostre na tela esta soma.*/
	int soma = a[0] + a[1] + a[5];
	
	cout << "A soma dos valores nas posicoes a[0] a[1] a[5] eh " << soma << endl;
	
	// (c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
	a[4] = 100;
	cout << endl;
	
	// (d) Mostre na tela cada valor do vetor A, um em cada linha
	cout << "VALORES DO VETOR" << endl;
	for (int i = 0; i < 6; i++) {
		cout << i << ": " << a[i] << endl;
	}
}

