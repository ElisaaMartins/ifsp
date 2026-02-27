/* Declare uma variável do tipo string e retornena tela a quantidade de vogais, palavras e consoantes */

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int getQtdVogais (string pPalavra){
    string vogais = "aeiou"; //string vogais = "aeiouAEIOU";
    int qtd = 0;

    // percorrendo a palavra
    for (int i = 0; i < pPalavra.size(); i++){
        for (int j = 0; j < vogais.size(); j++){
            if(tolower(pPalavra[i]) == tolower(vogais[j])){
                qtd++;
                break; // quebra o laço interno
            }
        }
    }
    return qtd;
}

// quantidade de consoantes
int getQtdConsoantes (string pPalavra){
    return pPalavra.size() - getQtdVogais(pPalavra);
}

// Obtem a quantidade de palavras contidas numa variavel string
int getPalavras(string pPalavra){
    int qtd = 1;
    for(int i = 0; i < pPalavra.size(); i++){
        if (pPalavra[i] == ' '){
            qtd++;
        }
    }
    return qtd;
}

int main (){

    //string texto = "paralelepipedo";
    string palavra;

    cout << "Informe a palavra: ";
    //cin >> palavra;
    getline(cin, palavra); // considera espaços

    system("cls");

    cout << "Palavra: " << palavra << endl;

    cout << "Tamanho: " << palavra.size() << endl;
    cout << "Quantidade de palavras: " << getPalavras(palavra) << endl;

    //int total = getQtdVogais(palavra);
    //cout << "A quantidade de vogais: " << total << endl;

    cout << "Numero de vogais: " << getQtdVogais(palavra) << endl;
    cout << "Numero de consoantes: " << getQtdConsoantes(palavra) << endl;




}
