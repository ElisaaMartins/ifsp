#include <iostream>

using namespace std;

// parte 1 - ordenacao em bolha
void bubbleSort(int arr[], int tamanho) {
    // laço externo
    for (int i = 0; i < tamanho; i++) {
        // laco interno
        for (int j = 0; j < tamanho - i - 1; j++) {
            // troca - variavel temporaria
            if (arr[j] > arr [j + 1] ) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr [j + 1] = temp;
            }
        }
        /* cout << "\t" << (i + 1) << ": ";
        for (int i = 0; i < tamanho; i++) {
            cout << arr[i] << " ";
        }
    cout << endl; */
    }

}

int busca_bin(int n, int* vet, int elem){
    // considera todo o vetor
    int ini = 0;
    int fim = n-1;
    int meio;
    // enquanto a parte restante for maior que zero
    while (ini <= fim) {
        meio = (ini + fim) / 2;
            if (elem < vet[meio]){
                fim = meio -1; // ajusta posicão final
            } else if (elem > vet[meio]){
                ini = meio + 1; // ajusta posicão inicial
            } else {
                return meio; // elemento encontrado
            }
    }

    // não encontrou
    return -1;
}



int main() {
    int vetor[] = {45,12,33,8,25,50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // tamanho vetor

    cout << "Vetor original: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << "\n";

    bubbleSort(vetor, tamanho); // chamada da funcao

    cout << "Vetor ordenado: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << "\n";

    cout << endl;
    cout << "Busca binaria numero 33 esta no indice: " <<  busca_bin(tamanho, vetor, 33) << endl;

    return 0;
}
