#include <iostream>
#include <iostream>

using namespace std;

int potencia(int base, int expoente) {
    if (expoente == 0){
        return 1;
    }

    return base * potencia(base, expoente - 1);

}

int main()
{
    int valorBase, valorExpoente, resultaoFinal; // long int maior

    cout << "---------- CALCULADORA DE DANO EXPOENCIAL ----------" << endl;

    cout << "Base: ";
    cin >> valorBase;

    cout << "Expoente: ";
    cin>> valorExpoente;

    resultaoFinal = potencia(valorBase, valorExpoente);

    cout << "Potencia: " << valorBase << "^" << valorExpoente << " = " << resultaoFinal << endl;
}
