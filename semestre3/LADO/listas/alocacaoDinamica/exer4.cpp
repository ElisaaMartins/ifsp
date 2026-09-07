/* Faça um programa que simule a memória de um computador:
    o usuário irá especificar o tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro.
    Para tanto, a memória solicitada deve ser um valor múltiplo do tamanho do tipo inteiro.
    Em seguida, o usuário terá 2 opções:
        inserir um valor em uma determinada posição ou
        consultar o valor contido em uma determinada posição.
    A memória deve iniciar com todos os dados zerados. */

#include <iostream>

using namespace std;

int main(){
    int bytes;

    cout << "Qual o tamanho da memoria em bytes (multiplo de " << sizeof(int) << "): " ;
    cin >> bytes;

    // se o multiplo da memoria for diferente de 0
    // ou a memoria nao for inteiro -- erro
    if(bytes % sizeof(int) != 0 || bytes <= 0){
        cout << "Numero invalido. Digite um valor valido";
    }

    int inteiro = bytes/sizeof(int);

    int* memoria = new int[inteiro];

    // menu 2 opçoes
    int opcao = 0;
    while(opcao != 3){
        cout << "==== MENU ====" << endl;
        cout << "1. Inserir um valor em uma determinada posição" << endl;
        cout << "2. Consultar o valor contido em uma determinada posição" << endl;
        cout << "3. Sair" << endl;
        cin >> opcao;


        if(opcao == 1){
            int posicao, valor;

            cout << "Em que posicao deseja inserir (0 a " << inteiro - 1 << "): ";
            cin >> posicao;

            if (posicao >= 0 && posicao < inteiro){
                cout << "Digite o valor: ";
                cin >> valor;
                memoria[posicao] = valor;
                cout << "Sucesso! " << endl;
            } else {
                cout << "Erro! Posicao invalida" << endl;
            }
        }


        if(opcao == 2){
            int posicao;

            cout << "Qual posicao deseja consultar: ";
            cin >> posicao;

            if (posicao >= 0 && posicao < inteiro){
                cout << "Valor da posicao " << posicao << " eh " << memoria[posicao] << endl;
            } else {
                cout << "Erro! Posicao invalida" << endl;
            }
        }
    }

    delete[] memoria;
}
