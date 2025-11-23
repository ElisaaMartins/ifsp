#include <iostream>


using namespace std;

int main() {
	
	const int ELEMENTOS = 10;
	
	int valores[ELEMENTOS];
	
	// Pedindo para o usuario informar os valores
	int i = 0;
	do {
		cout<<"Informe o valor na posicao "<<(i+1)<<endl;
		cin>>valores[i];
		
		i++;
	} while (i < ELEMENTOS);
	
	
	//Limpa a tela
	system("cls");
	
	// Imprimir na tela o maior e menor valor
	int menor, maior;
	
	// Atribuindo valor inicial para maior e menor 
	// baseado no primeiro elemento do vetor
	menor = maior = valores[0];
	
	for (int p=1;p<ELEMENTOS;p++) {
		//Comparando o menor valor
		if (menor > valores[p]) {
			menor = valores[p];
		}
		
		//Comparando o maior valor
		if (maior < valores[p]) {
			maior = valores[p];
		}
	}
	
	//Exibindo os valores do vetor
	int j = 0;
	while (j<ELEMENTOS) {
		cout<<valores[j]<<"\t";
		
		j++;
	}
	
	// Exibindo maior e menor valor
	cout<<endl<<endl<<"Maior valor: "<<maior<<endl;
	cout<<"Menor valor: "<<menor<<endl;
	
}

