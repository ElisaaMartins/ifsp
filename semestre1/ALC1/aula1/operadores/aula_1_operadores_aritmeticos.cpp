#include <iostream>

using namespace std;

int main(){
    int n1,n2,r; // cria��o de variaveis

    // O usu�rio atribui valores�s vari�veis n1 e n2
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;

    // adi��o
    r = n1 + n2;
    cout << "Adicao dos numeros = " << r << endl;

    // subtra��o
    r = n1 - n2;
    cout << "Subtracao dos numeros = " << r << endl;

    // multiplica��o
    r = n1 * n2;
    cout << "Multiplicacao dos numeros = " << r << endl;

    // divis�o
    r = n1 / n2;
    cout << "Divisao dos numeros = " << r << endl;

    // resto da divis�o
    r = n1 % n2;
    cout << "Resto da divisao = " << r << endl;

    return 0;
}
