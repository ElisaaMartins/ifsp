#include <iostream>

using namespace std; 

int main () {
    double valor1, valor2, valor3, valor4, valor5;
    
    double menor, maior; 

    cout << "Digite o primeiro valor: " << endl;
    cin >> valor1;
    
    cout << "Digite o segundo valor: " << endl;
    cin >> valor2;
    
    cout << "Digite o terceiro valor: " << endl;
    cin >> valor3;
    
    cout << "Digite o quarto valor: " << endl;
    cin >> valor4;
    
    cout << "Digite o quinto valor: " << endl;
    cin >> valor5;

    menor = maior = valor1;

    if (valor2 < menor) menor = valor2;
    if (valor2 > maior) maior = valor2;

    if (valor3 < menor) menor = valor3;
    if (valor3 > maior) maior = valor3;

    if (valor4 < menor) menor = valor4;
    if (valor4 > maior) maior = valor4;

    if (valor5 < menor) menor = valor5;
    if (valor5 > maior) maior = valor5;

    cout << "Menor numero: " << menor << endl;
    cout << "Maior numero: " << maior << endl;

    return 0;
}

