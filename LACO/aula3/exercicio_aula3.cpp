#include <iostream>

using namespace std;

int main () {
    double imc, peso, altura;

    cout << "Informe seu peso" << endl;
    cin >> peso;

    cout << "Informe sua altura" << endl;
    cin >> altura;

    imc = peso / (altura * altura); // calcula IMC

    if (peso <= 0 || altura <= 0) { // peso ou altura não pode ser 0
        cout << "Numeros devem ser positivos" << endl;
    } else {
        if (imc <= 18.5) {
            cout << "IMC: " << imc << " Abaixo do peso" << endl;
        } else if (imc >= 18.6 && imc <= 24.9) {
            cout << "IMC: " << imc << " Normal" << endl;
        } else if (imc >= 25 && imc <= 29.9) {
            cout << "IMC: " << imc << " Sobrepeso" << endl;
        } else if (imc >= 30 && imc <= 34.9) {
            cout << "IMC: " << imc << " Obesidade I" << endl;
        } else {
            cout << "IMC: " << imc << " Obesidade II ou mais" << endl;
        }
    }

    return 0;
}
