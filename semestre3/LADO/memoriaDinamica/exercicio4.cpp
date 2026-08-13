/* 4. Escreva um programa que leia primeiro os 6 números gerados pela loteria e
depois os 6 números do seu bilhete. O programa então compara quantos
números o jogador acertou. Em seguida, ele aloca espaço para um vetor de
tamanho igual a quantidade de números corretos e guarda os números
corretos nesse vetor. Finalmente, o programa exibe os números sorteados e
os seus números corretos.
*/

#include <iostream>

using namespace std;

int main() {
    int numerosSorteados[6];
    int numerosBilhete[6];

    cout << "Digite os 6 numeros sorteados na loteria:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numerosSorteados[i];
    }

    cout << "\nDigite os 6 numeros do seu bilhete:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numerosBilhete[i];
    }

    int qtdAcertos = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (numerosBilhete[i] == numerosSorteados[j]) {
                qtdAcertos++;
                break; // Sai do laço interno caso encontre o acerto
            }
        }
     }

     int* numerosCorretos = nullptr; // inicializar o ponteiro, do zero, limpa o enderço de memoria

     if (qtdAcertos > 0) {
        numerosCorretos = new int[qtdAcertos];

        // Guarda os números corretos no vetor alocado
        int indiceVetor = 0;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (numerosBilhete[i] == numerosSorteados[j]) {
                    numerosCorretos[indiceVetor] = numerosBilhete[i]; // copia de um vetor para o outro
                    indiceVetor++;
                    break;
                }
            }
        }
    }

    cout << "\n--- Resultado ---" << endl;

    cout << "Numeros sorteados: ";
    for (int i = 0; i < 6; i++) {
        cout << numerosSorteados[i] << " ";
    }

    cout << endl;

    cout << "Seus numeros corretos (" << qtdAcertos << " acertos): ";
    if (qtdAcertos > 0) {
        for (int i = 0; i < qtdAcertos; i++) {
            cout << numerosCorretos[i] << " ";
        }

        cout << endl;

        delete[] numerosCorretos;
    }
    else {
        cout << "Nenhum." << endl;
    }

    return 0;
}
