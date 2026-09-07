/* Faça um programa que receba do usuário o tamanho de uma string e chame uma
função para alocar dinamicamente essa string. Em seguida, o usuário deverá
informar o conteúdo dessa string. O programa imprime a string sem suas vogais.*/

#include <iostream>
#include <cctype>

using namespace std;

char* alocarString(int tamanho){
    return new char[tamanho + 1];
}

int main(){
    int tamanho;

    cout << "Quantas letras tem sua palavra: ";
    cin >> tamanho;

    cin.ignore();

    char* novaString = alocarString(tamanho);

    cout << "Qual eh a palavra: ";
    cin.getline(novaString,tamanho + 1);

    cout << "String: " << novaString << endl;

    cout << "String sem as vogais: ";
    for(int i = 0; novaString[i] != '\0'; i++) {
        char letraAtual = tolower(novaString[i]);

        if (letraAtual != 'a' && letraAtual != 'e' &&
            letraAtual != 'i' && letraAtual != 'o' && letraAtual != 'u') {
            cout << novaString[i];
        }
    }

    cout << endl;

    delete[] novaString;
}
