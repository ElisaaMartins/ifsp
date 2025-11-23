// programa para calcular a área do quadrado
// area = lado * lado

#include <iostream>

using namespace std;

int main(){
    int lado, area;
    // int lado;

    cout<< "Calculando a area de um quadrado \n" <<endl;
    cout<< "Informe o lado do quadrado " <<endl;
    cin>>lado;

   area = lado * lado;

    cout<< "A area do quadrado com lado " <<lado<< " e igual " <<area // lado * lado
    <<endl;

    return 0;
}
