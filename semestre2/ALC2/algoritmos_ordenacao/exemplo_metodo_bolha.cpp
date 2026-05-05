#include <iostream>

using namespace std;

const int TAMANHO = 10;

void ordena(int v[]){
    bool troca;
    do{
        troca = false;
        for(int i = 0; i < TAMANHO - 1; i++){
            // compara valores vizinhos
            if(v[i] > v[i+1]){
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                troca = true;
            }
        }
    } while (troca);

}

int main ()
{

    int numeros[TAMANHO] = {-2, 3, -5, 8, -3, 6, 10, 15, 0, 44};

    cout << "VALORES DESORDENADOS - antes" << endl;
    for (int i = 0; i < TAMANHO; i++){
        cout << numeros[i] << "\t";
    }

    cout << endl << endl;
    ordena(numeros);

    cout << "VALORES ORDENADOS - depois" << endl;
    for (int i = 0; i < TAMANHO; i++){
        cout << numeros[i] << "\t";
    }

    cout << endl << endl;

}
