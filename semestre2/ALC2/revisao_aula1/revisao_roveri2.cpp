/* 2. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias*/ 

#include <iostream>

using namespace std;

int main () {

	int ano, mes, dia;
	double idade_dias;
	
	cout << "Digite sua idade em anos, meses e dias: ";
	cin >> ano >> mes >> dia;
	
	idade_dias = (ano * 365) + (mes * 30) + dia;
	// ano = ano/4;
	/*for (int i = 0; i < ano; i++){
		idade_dias =  idade_dias + 1;
	}*/
	
	
	cout << "Sua idade em dias e: " << idade_dias;
	
}
