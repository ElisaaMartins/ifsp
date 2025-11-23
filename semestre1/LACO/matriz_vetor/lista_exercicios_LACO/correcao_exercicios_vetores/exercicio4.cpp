#include <iostream>


using namespace std;

int main() {
	
	const int QTD_ELEMENTOS = 5;
	double valores[QTD_ELEMENTOS];
	double soma_elementos = 0;
	
	for (int i=0;i<QTD_ELEMENTOS;i++) {
		cout<<"Informe o valor do elemento: "<<(i+1)<<endl;
		cin>>valores[i];
		
		soma_elementos += valores[i];
		
		system("cls");
	}
	
	
	system("cls");
	for (int i=0;i<QTD_ELEMENTOS;i++) {
		cout<<valores[i]<<"\t";
	}
	
	cout<<endl<<endl;
	
	cout<<"Media: "<<(soma_elementos/QTD_ELEMENTOS)<<endl;
	
	
	
	
	
}

