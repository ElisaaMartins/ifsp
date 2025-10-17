/* Solicite ao usuário para digitar dois números inteiros, n1 e n2;
Se os números forem iguais, exiba a mensagem “Sao iguais!”;
Se forem diferentes, exiba uma mensagem informando qual é o maior. */

#include <iostream>

using namespace std;

int main (){
    int numero1, numero2;

    cout << "Informe um numero inteiro: " << endl;
    cin >> numero1;

    cout << "Informe outro numero inteiro: " << endl;
    cin >> numero2;

    if (numero1 == numero2) {
        cout << "Os numeros " << numero1 << " e " << numero2 << " sao iguais" << endl;
    } else if (numero1 > numero2) {
        cout << "O numero1 = " << numero1 << " e maior que o numero2 = " << numero2 << endl;
    } else {
        cout << "O numero2 =  " << numero2 << " e maior que o numero1 = " << numero1 << endl;
    }

    return 0;
}
