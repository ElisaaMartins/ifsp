/* 5. Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias: 
 
	infantil A = 5 - 7 anos 
	infantil B = 8-10 anos 
	juvenil A = 11-13 anos 
	juvenil B = 14-17 anos 
	adulto = maiores de 18 anos 
*/

#include <iostream>

using namespace std;

int main () {
	int idade;
	
	cout << "Digite a idade do nadador: ";
	cin >> idade;
	
	if(idade >= 5 && idade <= 7){
		cout << "infantil A = 5 - 7 anos";
	} 
	else if (idade >= 8 && idade <= 10){
		cout << "infantil B = 8 - 10 anos";
	}
	else if (idade >= 11 && idade <= 13){
		cout << "juvenil A = 11 - 13 anos";
	}
	else if (idade >= 14 && idade <= 17){
		cout << "juvenil B = 14 - 17 anos";
	} 
	else {
		cout << "adulto = maiores de 18 anos";
	}
}
