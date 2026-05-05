#include <iostream>

using namespace std;

// prof mandou fazer os módulos sempre antes

// tipo de retorno - vazio, sem retorno
// argumentos de entrada - oq vai dentro do () - passar valores dentro do modulo
void texto() {
    cout << "Isso e um modulo\n";
}

// modulo de soma
void soma(int n1, int n2){
    cout << "soma dos valores: " << n1 + n2 << "\n";
}

// tipo de retorno - inteiro
int soma2 (int n1, int n2){
    return n1 + n2;
}

// modulo com vetor
void tr(string tra[4]){
    for(int i = 0; i < 4; i++){
        cout << tra[i] << ", " << endl;
    }
}

// SOBRECARGA DE FUNCOES
// mesmo nome parametros diferentes
void conta(int n1, int n2){
    int re;
    re = n1 + n2;
    cout << "Soma de " << n1 << " com " << n2 << " = " << re << endl;
}

void conta(){
    int n1, n2, re;
    n1 = 10;
    n2 = 20;
    re = n1 + n2;
    cout << "Soma de " << n1 << " com " << n2 << " = " << re << endl;
}


int main (){

    // chamando o modulo
    texto ();

    // quando o modulo tem parametros de entrada, passar valores na chamada - argumentos de entrada
    soma(15, 5);

    // "chamada" de um modulo com retorno
    int res;
    res = soma2 (175, 25);
    cout << "valor de res: " << res << "\n";
    // cout << "valor de res: " << soma2 (175, 25) << "\n";

    // chamar modulo com vetor
    string transp[4] = {"carro", "moto", "barco", "aviao"};
    tr(transp);

    // chamando a sobrecarga de funcoes
    conta(20, 30);
    conta();


    return 0;
}

