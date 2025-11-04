// matiz identidade
#include <iostream>
using namespace std;

int main() {
    int mat[3][3];
    int i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
          if (i == j){
          	mat[i][j] = 1;
		  }
		  else {
		  	mat[i][j] = 0;
		  }
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j <= 2; j++) {
            cout << "\t" << mat[i][j] << "\t";
        }
        cout << endl;
    }

}
