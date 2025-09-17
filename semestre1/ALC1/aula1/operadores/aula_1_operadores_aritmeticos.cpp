#include <iostream>

using namespace std;

int main(){
    int n1,n2,r; // criação de variaveis

    // O usuário atribui valoresàs variáveis n1 e n2
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;

    // adição
    r = n1 + n2;
    cout << "Adicao dos numeros = " << r << endl;

    // subtração
    r = n1 - n2;
    cout << "Subtracao dos numeros = " << r << endl;

    // multiplicação
    r = n1 * n2;
    cout << "Multiplicacao dos numeros = " << r << endl;

    // divisão
    r = n1 / n2;
    cout << "Divisao dos numeros = " << r << endl;

    // resto da divisão
    r = n1 % n2;
    cout << "Resto da divisao = " << r << endl;

    return 0;
}
