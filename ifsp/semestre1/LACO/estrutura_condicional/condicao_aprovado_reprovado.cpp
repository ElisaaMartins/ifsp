#include <iostream> 

using namespace std; 
  
int main () { 

	double nota; 
	
	cout << "Informe a nota" << endl; 
	cin >> nota; 
	
	if (nota >= 6){  
		cout << "Nota: " << nota << " APROVADO" << endl; 
	} else {  
		cout << "Nota: " << nota << " REPROVADO" << endl; 
	} 
	
	// CONDICIONAL COM TERNARIO  
		cout<<"Nota: " << nota << ((nota >= 6) ? " APROVADO" : " REPROVADO")<<endl; 

} 
