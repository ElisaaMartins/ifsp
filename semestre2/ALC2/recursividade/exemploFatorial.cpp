#include <iostream>

using namespace std;

// SOLUCAO INTERATIVA
int fatorial_iterativo(int n){
    int resultado = 1;

    for(int i = n; i > 0; i--){ // começa no 5 e vai decrementando
        resultado *= i; // decrementa multiplicando
        // vai desmembrando - pilha
        // 5 x 4 x 3...
    }

    return resultado;
}


// SOLUCAO RECURSIVA - parecido com o modelo matematico
int fatorial_recursivo(int n){
    // return ((n > 1) ? n*fatorial_recursivo(n-1) : 1);
    if (n > 1) {
        return n*fatorial_recursivo(n-1); // como se fosse 5!
        // n x a propria funcao com o parametro de n-1, assim vai diminuindo
    }else{
        return 1;
    }
}

int main (){
    cout << "Interativo: " <<  fatorial_iterativo(5) << endl;
    cout << "Recursivo: " <<   fatorial_recursivo(5) << endl;
}


