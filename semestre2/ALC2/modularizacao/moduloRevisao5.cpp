#include <iostream>

using namespace std;

void classeNadador (int idade){
	if(idade >= 5 && idade <= 7){
		cout << "Infantil A = 5 - 7 anos";
	} 
	else if (idade >= 8 && idade <= 10){
		cout << "Infantil B = 8 - 10 anos";
	}
	else if (idade >= 11 && idade <= 13){
		cout << "Juvenil A = 11 - 13 anos";
	}
	else if (idade >= 14 && idade <= 17){
		cout << "Juvenil B = 14 - 17 anos";
	} 
	else {
		cout << "Adulto = maiores de 18 anos";
	}
}

int main () {
	int idade;
	
	cout << "Digite a idade do nadador: ";
	cin >> idade;
	
	cout << endl;
	
	classeNadador(idade);

}
