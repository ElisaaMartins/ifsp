#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    // variaveis
    double n, valor, soma{0}, media;

    cout << "Digite a quantidade de numeros: ";
    cin >> n;

    // processamento
    for(int i = 1; i <= n; i++){ // (int i = 0; i < n; i++)

        cin >> valor;
        soma = soma + valor;
    }

    if (n <= 0){
        cout << "Nao ha numeros para calcular a media" << endl;
    } else {
        media = soma / n;

        // saída
        cout << "Valor da media " << media << endl;
    }



}
