/* Crie uma funcao para imprimir ma tela a pilha, usando prototipo:
    void imprime(Pilha *p)
*/

#include <iostream>

using namespace std;

// cria um nó
struct No{
    float info;
    No* prox;
};

// cria uma pilha
struct Pilha {
    No* topo;
};

// inicializa a pilha
Pilha* cria(){
    Pilha* p = new Pilha;
    p->topo = NULL; // diz que o topo tem que comecar nulo
    return p;
}

// cria uma funcao push para inserir os elementos da pilha
void push(Pilha* p, float valor) {
    No* novoNo = new No;
    novoNo->info = v;
    novoNo->prox = p->topo;
    p->topo = novoNo;
}


void imprime(Pilha* p){
    // No* aux;
    cout << "\t\t======Listagem da Pilha=======" << endl;
    for (No* aux = p->topo; aux != NULL; aux = aux->prox){
        cout << aux->info << " ";
    }
    cout << endl;
}

void libera(Pilha *p){
    delete p;
}

int main(){

    Pilha* p1 = cria();

    push(p1, 2.5);
    push(p1, 3.5);
    push(p1, 4.75);

    imprime(p1);
    libera(p1);

}
