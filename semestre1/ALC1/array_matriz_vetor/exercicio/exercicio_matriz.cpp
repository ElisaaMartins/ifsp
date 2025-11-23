#include <iostream>
//#include <locale>

using namespace std;

int main (){
    int vet[3], soma;

    /*for (int i = 0; i < 3; i++){
        cout << "Digite o número x[" << i << "]: ";
        cin >> vet[i];
    }*/

    cout << "Digite o numero x[0]: ";
    cin >> vet[0];

    cout << "Digite o numero x[1]: ";
    cin >> vet[1];

    cout << "Digite o numero x[2]: ";
    cin >> vet[2];

    cout << endl;

    // vet[0] + vet[1]
    soma = vet[0] + vet[1];
    cout << "SOMA: vet[0] + vet[1] " << endl;
    cout  << vet[0] << " + " << vet[1] << " = " << soma;
    if (soma % 2 == 0){
        cout << " eh par" << endl;
    }
    else {
        cout << " eh impar" << endl;
    }

    cout << endl;

    // vet[1] + vet[2]
    soma = vet[1] + vet[2];
    cout << "SOMA: vet[1] + vet[2] " << endl;
    cout << vet[1] << " + " << vet[2] << " = " << soma;
    if (soma % 2 == 0){
         cout << " eh par" << endl;
    }
    else {
        cout << " eh impar" << endl;
    }



}

