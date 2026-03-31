/* 3. Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias */

#include <iostream>

using namespace std;

int main () {
	
	int ano, mes, dia, idade_dia;
	
	cout << "Digite sua idade em dias: ";
	cin >> dia;
	
	ano = dia / 365;
	dia = dia % 365;
	
	mes = dia / 30;
	dia = dia % 30;
	
	
	cout << "sua idade e " << ano << " anos " << mes << " meses e " << dia << " dias";

}

