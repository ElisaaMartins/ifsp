/* Solicite ao usuário para digitar dois números;
• Verifique se cada um dos números digitados é par ou ímpar;
• Exiba na tela a quantidade de números pares e ímpares. */

#include <iostream>

using namespace std;

int main (){
    int numero1, numero2, par = 0, impar = 0; //par e impar vão funcionar como contadores

    cout << "Informe um numero: " << endl;
    cin >> numero1;

    cout << "Informe outro numero: " << endl;
    cin >> numero2;

    if (numero1 % 2 == 0) { //par inicia em 0, verifica se numero1 é par se sim soma 1 com a variavel par
        par ++;
    } else {
        impar++; //se nao soma 1 com impar
    }

    //mesma coisa com o nuemro 2
    if (numero2 % 2 == 0) {
        par ++;
    } else {
        impar++;
    }

    cout << "Dos numeros " << par << " sao pares e " << impar << " sao impares" << endl;

    return 0;
}
