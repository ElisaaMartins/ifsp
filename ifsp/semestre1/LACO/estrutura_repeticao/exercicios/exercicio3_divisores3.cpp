// 3 - Crie um algoritmo que, dados um número inicial e final, mostre todos os divisores por 3

#include <iostream>

using namespace std;

int main (){
	int numeroInicial, numeroFinal;
	bool divisor3 = false; // variavel para armazenar se achou ou não divisor de 3
	
	cout << "Digite o numero inicial: ";
	cin >> numeroInicial;
	
	cout << "Digite o numero final: ";
	cin >> numeroFinal;
	
	cout << "os divisores por 3 sao: ";
	
	// cria uuma variavel que funciona como contadora, mas começa e termina nos numeros digitados pelo usuario
	for (int divisores = numeroInicial; divisores <= numeroFinal; divisores++){
		
		// faz a conta essa variavel (nuemero) ao dividir por 3 tem que ter o resto 0
		if (divisores % 3 == 0 /*&& divisores != 0*/){
			cout << divisores << ", ";
			divisor3 = true; // achou divisor então é verdadeiro
		} 
		
	} 
	
	// caso não ache divisor por 3 ou seja a variavel vai ser diferente do que começou (começou com false, aqui vira true)
	// se fosse o contrario poderia dar conflito com essa variavel no if acima
	if (!divisor3) {
		cout << "nao possui divisores de 3 entre esses numeros" << endl;
	}
}
