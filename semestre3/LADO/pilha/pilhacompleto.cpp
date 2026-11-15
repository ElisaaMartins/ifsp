#include <iostream>

using namespace std;

struct No {
    float info;
    No* prox;
};
//====a vaiável prim foi alterara para topo para ficar mais didático
struct Pilha{
    No* topo;
};

Pilha* cria()
{
    Pilha* p = new Pilha;
    p->topo = NULL;
    return p;
}

No* ins_ini(No* l, float v){
    No* p = new No;
    p->info = v;
    p->prox = l;
    return p;
}

No* ret_ini(No* l)
{
    No* prox = l->prox;
    delete l;
    return prox;
}

void push(Pilha* p, float v){
    p->topo = ins_ini(p->topo, v);
}

float pop(Pilha* p)
{

    if (p->topo == NULL){
        cout << "Pilha Vazia. \n";
        exit(1);
    }
    float v = p->topo->info;
    p->topo = ret_ini(p->topo);
    return v;
}

bool vazia(Pilha* p)
{
    return p->topo == nullptr;
}

void libera(Pilha* p)
{
    while (p->topo != nullptr){
        No* t = p->topo->prox;
        delete p->topo;
        p->topo = t;
        }
    delete p;
}
void imprime(Pilha* p){
No* t;
    cout <<"\t\t======Listagem da Pilha=======" << endl;
    for(No* t = p->topo; t != nullptr; t=t->prox)
        cout << t->info << " ";
    cout << endl;
}
void imprimeTopo(Pilha* p) {
    if (vazia(p)) {
        cout << "A pilha esta vazia. Nao ha topo para imprimir." << endl;
        return; // Sai da função sem tentar acessar o topo
    }

    // Se chegou aqui, a pilha não está vazia
    cout << "Valor no topo: " << p->topo->info << endl;
}
int main()
{
    Pilha* p1 = cria();
    push (p1, 2.5);
    push (p1, 3.5);
    push (p1, 4.75);
    imprime(p1);
    imprimeTopo(p1);
    int aux = pop(p1);
    imprime(p1);
    imprimeTopo(p1);

    return 0;
}
