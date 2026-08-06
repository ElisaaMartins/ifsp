/******************************************************************************
Questão 3: Escreva uma função que dado um núumero real passado como
parametro, retorne a parte inteira e a parte fracionaria deste número. Escreva um
programa que chama esta função.

    Prototipo:
              void frac(float num, int* inteiro, float* frac);
              
*******************************************************************************/
#include
using namespace std;

void frac(float num, int* inteiro, float* fracio) //int *ptr; e int* ptr; -- são a mesma coisa
                                                  // traz o ponteiro para o tipo
{
// cast = conversão de tipos
*inteiro = (int)num; // separa/trunca a parte inteira
*fracio = num - *inteiro; // subtrai a parte inteira do numero real
}

int main()
{
float valorReal;
int parteInteira;
float parteFracionaria;

cout << "Digite um numero real: ";
cin >> valorReal;

frac(valorReal, &parteInteira, &parteFracionaria);

cout << "Parte Inteira: " << parteInteira << endl;
cout << "Parte Fracionaria: " << parteFracionaria << endl;


return 0;
}
