#include <iostream>

using namespace std;

int main () {
	int matriz[3][3];
	
	for (int i = 0; i <= 2; i++){
		
		for(int j = 0; j <= 2; j++){
			
			if(i == j){ // <= superior >= infeior
				matriz[i][j] = 1;
			} else {
				matriz[i][j] = 0;
			}
			
			cout << matriz[i][j] << "\t";	
		}
		
		cout << endl;
	}
}
