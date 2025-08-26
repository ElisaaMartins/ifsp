#include <iostream> 

using namespace std;  

int main () { 

	//int x; 
	double x; 
	
	cout<<"Informe o numero: "<<endl; 
	cin>>x; 
	
	//ESTRUTURA CONDIONAL SIMPLES 
	
	if (x > 10) { 
	x = x * 0.1; // só faz a conta se maior que 10, senão só printa o valor que o usuario inseriu
	// cout<<"O valor e maior que 10. O valor e: "<< x <<endl; 
	} 
	
	cout<<"o valor de x e  "<< x <<endl; 
	
} 
