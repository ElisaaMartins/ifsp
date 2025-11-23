// Exercício 13: Gráfico de Barras da Distribuição de Notas

#include <iostream>

using namespace std;

int main()
{
    // Declaração das variáveis
    int notas[] = {100, 95, 91, 88, 83, 80, 77, 74, 70, 68, 65, 62, 59, 55, 51, 49, 45, 40, 35, 30, 25, 20, 15, 10, 5, 99, 87, 76, 64, 50};
    int tamVetor = sizeof(notas) / sizeof(notas[0]);
    int contador[11] = {0};
    // 1ª Parte
    // Contabilizar valores por faixa
    for (int i{0}; i < tamVetor; ++i) {
        contador[notas[i]/10] += 1;
    }

    // 2ª Parte
    // Imprimir gráfico
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


