#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// Quantifica o numero de vogais numa determinada palavra
int main() {

	string palavra;

	cout<<"Digite a palavra: ";
	getline(cin, palavra);

	int ocorrencias[palavra.length()];

	for (int i=0;i<palavra.length();i++) {
		int qtd=0;
	    for (int j=0;j<palavra.length();j++) {
	    	if (palavra[i] == palavra[j]) {
	    	   qtd++;
			}
		}

		ocorrencias[i] = qtd;
	}

	int maximo = 0;
	string letra;
	for (int i=0;i<palavra.length();i++) {
		if (maximo < ocorrencias[i]) {
			maximo = ocorrencias[i];
			letra = palavra[i];
		}

		cout<<endl;
		cout<<"Letra: "<<palavra[i]<<"\t Ocorrencias: "<<ocorrencias[i]<<endl;
	}

	cout<<endl;
	cout<<"Letra que mais se repete: "<<letra<<endl;

	return 0;
}
