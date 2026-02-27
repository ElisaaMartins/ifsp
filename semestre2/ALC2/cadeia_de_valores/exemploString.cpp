#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main (){
    char letra = 'B';
    char palavra[] = "Jose";
    string texto = "Jose";

    // letras individualizadas
    //cout << texto[1]; // letra o
    //cout << palavra[1]; // letra o

    //string
    //cout << texto.substr(1, 2); // os - pedaço string

    /*texto = texto.erase(1,2); // Js - apaga
    cout << texto;*/

    /*texto = texto.replace(1, 1, "X"); //JXse - adiciona onde eu quero
    cout << texto;*/

    /*texto = texto.append("X");  // JoseX - adiciona no final
    cout << texto;*/

    // exibe palavra ao contrario - string reversa
    cout << texto << endl;
    for (int i = texto.size() - 1; i >= 0; i--){
        cout << texto[i];
    }

}
