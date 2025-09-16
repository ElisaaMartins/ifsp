#include <iostream>

using namespace std;

int main (){

	int numero = 1;
	int count;

	do {
		
		count = 1;
		
		do {
			cout << numero << " X " << count << " = " << (numero * count) << endl;
			count++;
		
		} 
	
		while (count <= 10);
				
		cout<<endl;

		numero++;
	}
	
	while (numero <=10);
	
}
