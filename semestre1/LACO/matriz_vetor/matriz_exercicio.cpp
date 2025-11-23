#include <iostream>

using namespace std;

int main () {
	int matriz[3][3];
	
	for (int i = 0; i <= 2; i++){
		
		for(int j = 0; j <= 2; j++){
			
			matriz[i][j] = i + j * 2;
			cout << matriz[i][j] << "\t";	
		}
		
		cout << endl;
	}
}
