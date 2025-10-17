#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    int minuto = 3;
    int minutosSegundos = minuto * 60; //transforma minutos em segundos

    cout << "Transformando 3 minutos em segundos" << endl;
    cout << "Resultado:  " << minutosSegundos << " segundos" << endl;

    minuto = 5; // mudando os minutos
    minutosSegundos = minuto * 60; // faz a conta com o valor da variaval nova

    cout << "Transformando 5 minutos em segundos" << endl;
    cout << "Resultado:  " << minutosSegundos << " segundos" << endl;

    int horas = 3;
    int horasSegundos = horas * 60 * 60; //transforma horas em segundos

    cout << "Transformando 3 horas em segundos" << endl;
    cout << "Resultado:  " << horasSegundos << " segundos" << endl;


    // Sobre o Pi
    float pi = 3.141526; //valor de pi
    cout << "Imprimindo o valor de pi " << pi << endl;

}
