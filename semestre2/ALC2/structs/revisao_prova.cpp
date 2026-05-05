#include <iostream>

using namespace std;

// criar sempre antes do main
struct Carro {
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    // METODOS
    void insere(string stNome, string stCor, int stPot, int stVelMax){
        nome = stNome;
        cor = stCor;
        pot = stPot;
        velMax = stVelMax;
        vel = 0;
    }

    void mostra(){
        cout << "Nome: " << nome << "\n";
        cout << "Cor: " << cor << "\n";
        cout << "Potencia: " << pot << "\n";
        cout << "Velocidade atual: " << vel << "\n";
        cout << "Velocidade maxima: " << velMax << "\n";
        cout << endl;
    }

    void mudaVel(int mv){
        vel = mv;
        if(vel > velMax){
            vel = velMax;
        }
        if (vel < 0){
            vel = 0;
        }
    }
};


int main (){
    // carro virou um tipo, como int, bool etc
    /* Carro car1;
    Carro car2; */

    // configurando as propriedades - como em um vetor
    /* car1.nome = "tornado"; // usa o ponto (.) para acessar o atributo do tipo
    car1.cor = "vermelho";
    car1.pot = 450;
    car1.velMax = 350; */

    /* car2.nome = "luxo";
    car2.cor = "preto";
    car2.pot = 250;
    car2.velMax = 260; */

    /* cout << "Nome: " << car1.nome << "\n";
    cout << "Cor: " << car1.cor << "\n";
    cout << "Potencia: " << car1.pot << "\n";
    cout << "Velocidade maxima: " << car1.velMax << "\n";
    cout << endl; */

    /* cout << endl;
    cout << "Nome: " << car2.nome << "\n";
    cout << "Cor: " << car2.cor << "\n";
    cout << "Potencia: " << car2.pot << "\n";
    cout << "Velocidade maxima: " << car2.velMax << "\n"; */


    // METODOS
    /* car1.insere("tornado", "vermelho", 450, 350);
    // car2.insere("luxo", "preto", 250, 260);

    car1.mostra();
    //car2.mostra();

    car1.mudaVel(400);

    car1.mostra(); */


    // ARRAY
    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4, car5;

    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;


    carros[0].insere("tornado", "vermelho", 450, 350);
    carros[1].insere("luxo", "preto", 250, 260);
    carros[2].insere("familia", "prata", 150, 100);
    carros[3].insere("trabalho", "branco", 80, 120);
    carros[4].insere("padrao", "cinza", 100, 150);

    for(int i = 0; i < 5; i++){
        carros[i].mostra();
    }

}
