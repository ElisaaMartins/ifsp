#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

int main (){

    SetConsoleOutputCP(CP_UTF8);

    /*int linha = 2, coluna = 5;

    // BASE - Retângulo
    //linha = i
    for (int i = 1; i <= linha; i++){

        //coluna = j
        for (int j = 1; j <= coluna; j++) {
            cout << "█ ";
        }

        cout << "\n" << endl;
    }*/



    // pirâmide

    int qtdEscada = 0;

    cout <<  "Digite a altura de blocos da pirâmide: " << endl;
    cin >> qtdEscada;

    for (int i = 1; i <= qtdEscada; i++){

        for (int j = 1; j <= i; j++) {
            cout << "█ ";
        }


    cout << endl;

    }

}




