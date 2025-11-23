#include <iostream>

using namespace std;

int main() {
    const int ELEMENTOS = 5;
    int notas[ELEMENTOS] = {50, 20, 10, 5, 1};
    int valorSacar;

    cout << "Digite o valor que deseja sacar " << endl;
    cin >> valorSacar;


	cout << "Notas sacadas: ";
    for (int i = 0; i < ELEMENTOS; i++){
		while (valorSacar >= notas[i]){
			cout << notas[i] << " ";
			valorSacar = valorSacar - notas[i];

		}
    
    }
    
    cout << "\nSaldo final: " << valorSacar;
    
}
