// 2.8.5 LABORATÓRIO: Coletando Notas de Dinheiro

#include <iostream>

using namespace std;

int main() {
    int valor;
	int notas[] = {50, 20, 10, 5, 1};
	int notasUsadas[5] = {0};
    
    cout << "Digite o valor que deseja sacar: ";
    cin >> valor;
    
    for (int i = 0; i < 5; i++) {
    	notasUsadas[i] = valor / notas[i]; // quantas notas desse valor cabem
        valor %= notas[i]; // resto do valor após usar essas notas
	}

	// percorrer cada denominação novamente (da maior para a menor)
	for (int i = 0; i < 5; i++) {
        for (int j = 0; j < notasUsadas[i]; j++) {
            cout << notas[i] << " ";
        }
    }


    cout << endl;

}
