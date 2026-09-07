/* 1) Implemente uma função o que calcule a área da superfície e o volume de uma esfera de raio R.
Essa funcão deve obedecer ao protótipo:

            void calc_esfera(float R, float *area, float *volume)

A area da superfície e o volume sao dados, respectivamente, por:

        A = 4 ∗ p ∗ R^2

        V = 4/3 ∗ p ∗ R^3
*/


#include <iostream>

using namespace std;

void calc_esfera(float R, float *area, float *volume){
    float pi = 3.14;

    *area = 4 * pi * (R*R); // area
    *volume = 4.00/3.00 * pi * (R*R*R); // volume
}

main() {
    float area, volume, raio;
    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    calc_esfera(raio, &area, &volume);

    cout << "A area da superficie da sua esfera eh: " << area << endl;
    cout << "O volume da sua esfera eh: " << volume << endl;
}
