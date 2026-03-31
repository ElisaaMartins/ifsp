/* Crie um programa que contenha um array contendo 8 elementos inteiros. 
Leia esse array do teclado e imprima o endereço das posições contendo valores pares. */

#include <iostream>

using namespace std;

int main(){
    int n1[8]; 
    // int *n2 = new int[7]; 
    
    cout << "Digite o v1: ";
    cin >> n1[0];

	cout << "Digite o v2: ";
	cin >> n1[1];

	cout << "Digite o v3: ";
    cin >> n1[2];

	cout << "Digite o v4: ";
    cin >> n1[3];

	cout << "Digite o v5: ";
    cin >> n1[4];

	cout << "Digite o v6: ";
    cin >> n1[5];

	cout << "Digite o v7: ";
    cin >> n1[6];


	cout << "Digite o v8: ";
    cin >> n1[7];

    cout << endl;

    cout << "Vetores pares: ";
    for (int i = 0; i < 8; i++){
		if (n1[i] % 2 == 0){
			cout << n1[i] << " | ";
		} 
    }
    
    cout << endl;
    
    cout << "Enderecos dos vetores: ";
    for (int i = 0; i < 8; i++){
		if (n1[i] % 2 == 0){
			cout << &n1[i] << " | ";
		} 
    }
    		
    
}
