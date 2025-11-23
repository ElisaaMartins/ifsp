// 2.8.6 LABORATÓRIO: Palíndromos

#include <iostream>

using namespace std;

int main(void) {
        int vector[] = {1, 7, 3, 8, 3, 7, 1};

        bool ispalindrome = true;

        int n = sizeof(vector) / sizeof(vector[0]);


        for (int i = 0; i < n / 2; i++) {
        	if (vector[i] != vector[n - 1 - i]) {
            	ispalindrome = false;
            break; // se achar uma diferença, não precisa continuar
        	}
    	}     


        if(ispalindrome) {
            cout << "eh um palindromo";
		}
        else {
        	cout << "Nao eh um palindromo";
		}
	
    cout << endl;

    return 0;

}
