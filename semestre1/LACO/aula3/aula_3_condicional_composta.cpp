
#include <iostream> 

using namespace std;  

int main () { 

	//int x; 
	double x; 
	
	cout<<"Informe o numero: "<<endl; 
	cin>>x;
	
	//ESTRUTURA CONCIDONAL COMPOSTA 
	if (x > 10) { 
		x = x * 0.1; // se maior que 10 faz essa conta
	} else { 
		x = x * 0.5; // senão faz essa conta (10 está aqui)
	} 
	
	cout<<"o valor de x e  "<< x <<endl; 
}
	 
	
