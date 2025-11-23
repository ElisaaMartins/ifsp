#include <iostream>

using namespace std;

int main (){

    //int nota1, nota2, nota3;

    //const int tamanhoArray = 3;

    // vetor | array
    int notas[] = {87, 76, 92, 78, 98};
    int tamVetor = sizeof(notas) / sizeof(notas[0]);

    cout << "Tamanho do vetor: " << tamVetor << endl;

    //cout << "Array: " << notas[0] << endl; //imprime nota1 = 87

    // imprimir todos os itens de um array
    for (int i{0}; i < tamVetor; i++){
        cout << "Valor " << i << ": " << notas[i] << endl;
    }

}
