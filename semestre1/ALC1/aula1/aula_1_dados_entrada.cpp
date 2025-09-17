#include <iostream>

using namespace std;

int main(){
    // variaveis
    double numero1;
    double numero2;
    double soma;
    /* podem ser declaradas em linha unica:
    double numero1, numero2, soma; */

    cout<<"Digite o primeiro numero: ";
    cin >> numero1; // c in - obter umvalor do teclado

    cout<<"Digite o segundo numero: ";
    cin>>numero2;

    soma = numero1 + numero2;
    cout<<"A soma dos numeros e "<<soma<<endl;
    // cout<<"A soma dos numeros e "<<numero1 + numero2<<endl; -- a adição diretamentenos parâmetros docomando cout

    return 0;
}
