#include <iostream>

using namespace std;

struct No {
    float info;
    No* prox;
};

struct Pilha {
    No* topo;
};

Pilha* cria() {
    Pilha* p = new Pilha;
    p->topo = NULL;
    //p->topo = nullptr;
    return p;
}

void push(Pilha* p, float v) {
    // Lógica do antigo ins_ini incorporada aqui
    No* novoNo = new No;
    novoNo->info = v;
    novoNo->prox = p->topo; // O próximo do novo nó aponta para o antigo topo
    p->topo = novoNo;       // O topo da pilha passa a ser o novo nó
}

float pop(Pilha* p) {
    //if (p->topo == nullptr) {
    if (p->topo == NULL) {
        cout << "Pilha Vazia. \n";
        exit(1); // FALHA - SAI DO PROGRAMA
    }

    // Lógica do antigo ret_ini incorporada aqui
    float v = p->topo->info;  // Salva o valor para retornar depois
    No* temp = p->topo;       // Guarda o nó do topo temporariamente para poder deletar

    p->topo = p->topo->prox;  // O topo passa a ser o elemento de baixo
    delete temp;              // Libera a memória do antigo topo

    return v;
}

bool vazia(Pilha* p) {
    //return p->topo == nullptr;
    return p->topo == NULL;
}

void libera(Pilha* p) {
    //while (p->topo != nullptr) {
    while (p->topo != NULL) {
        No* t = p->topo->prox;
        delete p->topo;
        p->topo = t;
    }
    delete p;
}

void imprime(Pilha* p) {
    cout << "\t\t======Listagem da Pilha=======" << endl;
    // for (No* t = p->topo; t != nullptr; t = t->prox)
    for (No* t = p->topo; t != NULL; t = t->prox)
        cout << t->info << " ";
    cout << endl;
}

void imprimeTopo(Pilha* p) {
    if (vazia(p)) {
        cout << "A pilha esta vazia. Nao ha topo para imprimir." << endl;
        return;
    }
    cout << "Valor no topo: " << p->topo->info << endl;
}

int main() {
    Pilha* p1 = cria();

    push(p1, 2.5);
    push(p1, 3.5);
    push(p1, 4.75);



    float aux = pop(p1); // Alterado de int para float
    cout << "\nValor desempilhado: " << aux << "\n\n";
        libera(p1);

    return 0;
}
