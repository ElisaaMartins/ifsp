#include <iostream>

using namespace std;

int main (){

	int numero = 1;
	
	while (numero <= 10){ 
		
		int count = 0;
		
		while (count <= 10) {
			cout << numero << " X " << count << " = " << (numero * count) << endl;
			count++;
		}
		numero++;
		cout<<endl;
	}
}
