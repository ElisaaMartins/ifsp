/* Crie uma funcao para imprimir o elemento do topo da pilha, usando o prototipo:
    void imprimeTopo(Pilha *p)
*/

#include <iostream>

using namespace std;


#define MAX 5

struct No{
    float info;
    No* prox;
};

struct Pilha {
    //int n;
    //float vet[MAX];
    No* topo;
};


Pilha* cria(){
    Pilha* p = new Pilha;
    //p->n = 0;
    p->topo = NULL;
    return p;
}

void imprimeTopo(Pilha* p){
    if(vazia(p)){
        cout << "A pilha está vazia" << endl;
        return;
    }
    cout << "Topo: " << p->topo>info;
}

void libera(Pilha *p){
    delete p;
}

int main(){

    Pilha* p1 = cria();
    imprime(p1);
    libera(p1);

}
