#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome = "Jose", nome2 = "Maria";

    cout << nome + nome2 << endl; // Resultado: JoseMaria

    string saudacao = "Ola ";
    string nome3 = "Joao";

    string frase = saudacao + nome3; // concatenação
    cout << frase << endl;

    int tamanho = frase.length(); // conta quantos caracteres existem na frase (espaco conta)
    cout << tamanho << endl;

    string texto;
    cout << "digite uma palavra: ";
    getline(cin, texto); // para usar espacos
    cout << "Palavra: " << texto << endl;


    string texto2 = "C++ e legal";
    size_t pos = texto2.find("C++"); // vai pegar do "C++" em diante
    string substring = texto2.substr(pos, 3); // vai pegar 3 caracteres depois do C++, com base na frase acima

    cout << substring << endl;



}
