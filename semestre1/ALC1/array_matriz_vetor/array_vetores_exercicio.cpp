// Exerc�cio 13: Gr�fico de Barras da Distribui��o de Notas

#include <iostream>

using namespace std;

int main()
{
    // Declara��o das vari�veis
    int notas[] = {100, 95, 91, 88, 83, 80, 77, 74, 70, 68, 65, 62, 59, 55, 51, 49, 45, 40, 35, 30, 25, 20, 15, 10, 5, 99, 87, 76, 64, 50};
    int tamVetor = sizeof(notas) / sizeof(notas[0]);
    int contador[11] = {0};
    // 1� Parte
    // Contabilizar valores por faixa
    for (int i{0}; i < tamVetor; ++i) {
        contador[notas[i]/10] += 1;
    }

    // 2� Parte
    // Imprimir gr�fico
    cout << "Distribuicao das notas" << endl;
    for(int j{0}; j < 11; ++j) {
        if (j == 10) {
            cout << "    100: ";
        }
        else {
            cout << (j * 10) << " - " << (j*10+9) << ": ";
        }

        for(int asterisco{0}; asterisco < contador[j]; asterisco++) {
            cout << "* ";
        }
        cout << endl;
    }
}


