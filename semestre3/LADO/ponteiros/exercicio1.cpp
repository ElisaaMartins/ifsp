/******************************************************************************
Questão 1: Escreva um programa que contenha duas variáveis inteiras. Compare
seus endereços s e exiba o maior endereço.
*******************************************************************************/

#include
using namespace std;

int main()
{
int v1, v2;

if (&v1 > &v2){
cout << "o maior enderco é de v1: " << &v1;
}
else{
cout << "o maior enderco é de v2: " << &v2;
}

//cout << "v1: " << &v1 < //cout << "v2: " << &v2 <
return 0;
}
