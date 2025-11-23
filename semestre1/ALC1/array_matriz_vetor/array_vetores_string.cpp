#include <iostream>
#include <string>

using namespace std;

int main (){

    string comida = "PAO";

    cout << "Tamanho da palavra: " << comida.length() << endl;

    //imprimir na vertical
    for (int i{0}; i < comida.length(); i++){
        cout << comida[i] << endl;
    }

}
