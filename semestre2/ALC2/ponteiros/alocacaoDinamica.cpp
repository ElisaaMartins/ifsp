#include <iostream>

using namespace std;

int main(){
    //alocacao dinamica
    int n1[10]; // stack
    int *n2 = new int[3]; //heap


    n1[0] = 1;
    n1[1] = 3;
    n1[2] = 5;

    n2[0] = 1;
    n2[1] = 3;
    n2[2] = 5;

    cout << "N1" << endl;
    for (int i = 0; i < 3; i++){
        cout<< n1[i] << endl;
    }

    cout << endl;

    cout << "N2" << endl;
    for (int i = 0; i < 3; i++){
        cout<< n2[i] << endl;
    }

    delete[] n2; //desaloca - libera espaço de memoria - durante o programa
}
