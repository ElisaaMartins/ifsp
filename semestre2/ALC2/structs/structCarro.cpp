#include <iostream>

using namespace std;

struct Carro {
    int ano;
    string modelo;
    double velocidade;
    bool importado;
};

int main (){
    const int QTD_CARRO = 2;
    Carro car[QTD_CARRO];
    string import;

    for (int i = 0; i < QTD_CARRO; i++){
        cout << "Carro numero " << (i + 1) << endl;

        cout << "Informe o ano do carro: ";
        cin >> car[i].ano;

        cout << "Informe o modelo do carro: ";
        cin >> car[i].modelo;

        cout << "Informe a que velocidade o carro chega: ";
        cin >> car[i].velocidade;


        cout << "Informe se o carro e importado (S/N): ";
        cin >> import;

        car[i].importado = ((import == "S") ? true : false);

            /*if import == S {
                true
            } else {
                false
            }
            */
        cout << endl;
}

    system("cls");
    for (int i = 0; i < QTD_CARRO; i++){
        cout << "Carro numero " << (i + 1) << endl;
        cout << "Ano: " << car[i].ano << endl;
        cout << "Modelo: " << car[i].modelo << endl;
        cout << "Velocidade: " << car[i].velocidade << endl;
        cout << "Importado: " << ((car[i].importado == true) ? "Sim" : "Nao") << endl;

            /*if (car.omportado == tue {
                cout >> "Sim" << endl;
            } else {
                cout >> "Nao" << endl;
            }*/

        cout << endl;
    }
}
