// correção exercicio 2 - Roveri
#include <iostream>
using namespace std;

int main() {
	int valores[10];
	
	// usuario informando valores
	int i = 0;
	do {
    	cout << "Inpforme o valor na posicao " << (i + 1) << endl;
    	cin >> valores[i];
    	
    	i++;
	} while (i < 10);
	
	// limpar a tela
	system ("cls"); 

	//imprimir maior e menor valor 	
	int menor, maior;
	
	//atribuindo valor inicial para maior e menor
	//baseando no primeiro elemento do vetor
	menor = maior = valores[0];
	
	for (int p = 1; p < 10; p++) { //p = posição
		// comparando menor valor 
		// lógica = menor não pode ser menor que nada, por isso substituir
		if (menor > valores[p]) {
			menor = valores[p]; 
		} 
		
		// comparando maior valor
		if (maior < valores[p]) {
			maior = valores[p]; 
		} 
	}
	
	// exibindo os valores do vetor
	int j = 0;
	while (j < 10){
		cout << valores[j] << "\t";
		
		j++;
	}
	
	//exibindo o maior e menor valor
	cout << endl;
	cout << endl << "Maior valor: " << maior << endl;
	cout << endl << "Menor valor: " << menor << endl;
}
