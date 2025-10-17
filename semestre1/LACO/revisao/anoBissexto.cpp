#include <iostream>

using namespace std;

int main () {
	int ano;
		
	cout << "Informe o ano: " << endl;
	cin >> ano;
	
	if (ano > 400) {
		if (ano % 4 == 0) {
			if (ano % 100 != 0 || ano % 400 == 0){
				cout << "E bissexto" << endl;
			} else {
				cout << "Nao e bissexto" << endl;
			}
		} else {
			cout << "Nao e bissexto" << endl;
		}
		
	
	} else {
		cout << "Ano invalido. O ano deve ser maior que 400" << endl;
	}
}
