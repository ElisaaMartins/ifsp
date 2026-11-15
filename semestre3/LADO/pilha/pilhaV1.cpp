#include <iostream>

using namespace std;

// PILHA COM LISTA ENCADEADA

struct No {
    float info;
    No* prox;
};
//====a variável prim foi alterara para topo para ficar mais didático
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

int main()
{
    Pilha* p1 = cria();

    push (p1, 2.5);
    push (p1, 3.5);
    push (p1, 4.75);

    // Se chegou aqui, a pilha não está vazia
    cout << "Valor no topo: " << p1->topo->info << endl;


    int aux = pop(p1);


    libera(p1);

    return 0;
}
