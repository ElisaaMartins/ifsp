#include <iostream>
#include <locale>

using namespace std;

int main(){
    //setlocale(LC_ALL, "Portuguese");

    // variaveis
    double n, valor, soma{0}, media;

    cout << "Digite a quantidade de números: ";
    cin >> n;

    // processamento
    for(int i = 1; i <= n; i++){ // (int i = 0; i < n; i++)
        //cout << "Digite as notas do aluno: ";
        cin >> valor;
        soma = soma + valor;
    }

    if (n <= 0){
        cout << "Não há números para calcular a média" << endl;
    } else
        media = soma / n;

        // saída
        cout << "Valor da média " << media << endl;
    }
