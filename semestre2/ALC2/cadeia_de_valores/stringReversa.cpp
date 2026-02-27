#include <iostream>
#include <string>

using namespace std;

// Exibe a palavra de forma reversa
int main() {
	string palavra;
	string palavra_nova;

	cout<<"Informe a palavra: ";
	getline(cin, palavra);


	for (int i=(palavra.length()-1);i>=0;i--) {
		//cout<<palavra[i];
		palavra_nova = palavra_nova + palavra[i];
	}

	cout<<endl;
	cout<<"Reversa: "<<palavra_nova<<endl;
}
