/******************************************************************************
Questão 2: Faça um programa que leia 2 valores inteiros e chame uma função que
receba estas 2 variáveis e troque o seu conteúdo , ou seja, esta função e chamada
passando duas variáveis A e B por exemplo e, após a execução da função, A conterá
o valor de B e B terá o valor de A.

*******************************************************************************/
#include
using namespace std;

void trocarValores (int *a, int *b) // *a = enderço a |*b = enderço b
{
int temp = *a; // local
*a = *b;
*b = temp;

}

int main()
{
int a;
int b;

cout << "Digite o valor de a: ";
cin >> a;

cout << "Digite o valor de b: ";
cin >> b;

// passagem dereferencia
trocarValores(&a, &b);

cout << "\n Após a troca: \n\n";
cout << "A = " << a << endl;
cout << "B = " << b << endl;


return 0;
}
