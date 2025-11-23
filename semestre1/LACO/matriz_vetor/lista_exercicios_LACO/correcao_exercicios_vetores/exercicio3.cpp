#include <iostream>


using namespace std;

int main() {
	
	const int ELEMENTOS = 10;
	
	int valores[ELEMENTOS];
	int qtd_negativo = 0;
	int soma_positivo = 0;
	
	for (int i=0;i<ELEMENTOS;i++) {
		cout<<"Informe o valor do elemento "<<(i+1)<<endl;
		cin>>valores[i];
		
		system("cls");
	}
	
	for (int i=0;i<ELEMENTOS;i++) {
		if (valores[i] < 0) {
			qtd_negativo++;
		} else {
			soma_positivo += valores[i];
		}
	}
	
	system("cls");
	
	for (int i=0;i<ELEMENTOS;i++) {
		cout<<valores[i]<<"\t";
	}
	
	
	cout<<endl<<endl;
	cout<<"Quantidade de numeros negativos => "<<qtd_negativo<<endl;
	cout<<"Soma dos numeros positivos =>"<<soma_positivo<<endl;

}

