#include <iostream>

using namespace std;

int getAnos (int pDia) {
    return
}


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

