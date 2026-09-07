/* Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6 números do seu bilhete.
O programa então compara quantos números o jogador acertou.
Em seguida, ele aloca espaço para um vetor de tamanho igual a quantidade de números corretos e guarda os números corretos
nesse vetor.
Finalmente, o programa exibe os números sorteados e os seus números corretos.
*/

#include <iostream>

using namespace std;

int main(){
    int bilhete[6];
    int loteria[6];
    int acertos;

    cout << "Digite os numeros da loteria: ";
    for(int i = 0; i < 6; i++){
        cin >> loteria[i];
    }

    cout << "Digite os seus numeros: ";
    for(int i = 0; i < 6; i++){
        cin >> bilhete[i];
    }

    cout << endl;

    // comparacao loteria e bilhete
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(loteria[i] == bilhete[j]){
                acertos++;
                break;
            }
        }
    }

    // alocando espacos quando acerta
    if(acertos > 0){
        int* vetorAcertos = new int[acertos];
        int posicao;

        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                if(loteria[i] == bilhete[j]){
                    vetorAcertos[posicao] = bilhete[i];
                    posicao++;
                    break;
                }
            }
        }


        // imprimindo
        cout << "Numeros sorteados: " << endl;
        for(int i = 0; i < 6; i++){
            cout << loteria[i] << " | ";
        }

        cout << endl;

        cout << "Seus numeros: " << endl;
        for(int i = 0; i < 6; i++){
            cout << bilhete[i] << " | ";
        }

        cout << endl;

        cout << "Seus acertos foram: " << acertos << endl;
        for(int i = 0; i < acertos; i++){
            cout << vetorAcertos[i] << " | ";
        }

        delete[] vetorAcertos;
    }
    else {
        cout << "Voce nao acertou nada!" << endl;
    }
}

