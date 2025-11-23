// 10 nomes e faz uma listagem só com aqueles que começam com C
#include <iostream>
#include <string>
#include <cctype> // para toupper

using namespace std;

int main () {
	string nome, soC[10];
	int totalC = 0;

	for (int i = 0; i <= 10; i++){
		cout << "Digite seu nome: " << endl;
		cin >> nome;
		
		if (toupper(nome[0]) == 'C'){
			soC[totalC] = nome;
			totalC = totalC + 1;
		}
	}
	
	cout << endl;
	cout << "LISTAGEM FINAL" << endl;
	cout << endl;
	
	for (int i = 0; i <= totalC; i++){
		cout << soC[i] << endl;
	}
}
