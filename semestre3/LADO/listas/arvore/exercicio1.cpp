#include <iostream>

using namespace std;

// Definição
struct Arv {
    char info;
    struct Arv* esq;
    struct Arv* dir;
};

// Inicializa
Arv* inicializa(void)
{
    return nullptr;
}

Arv* cria(char c, Arv* sae, Arv* sad){
    Arv* p = new Arv;
    p->info = c;
    p->esq = sae;
    p->dir = sad;
    return p;
}

// árvore vazia
bool vazia(Arv* a)
{
    return a == nullptr;
}

// Imprime a árvore
void imprime (Arv* a)
{
    if (!vazia(a)){
        cout << a->info << " ";
        imprime(a->esq); /* mostra sae */
        imprime(a->dir); /* mostra sad */
    }
}

// Libera a memória
Arv* libera(Arv* a) {
    if (!vazia(a)) {
        libera(a->esq); // libera subárvore esquerda
        libera(a->dir); // libera subárvore direita
        delete a;       // libera o nó atual (raiz)
    }
    return nullptr;
}

// Pré-Ordem
void preOrdem(Arv* a) {
    if (!vazia(a)) {
        cout << a->info << " ";
        preOrdem(a->esq);
        preOrdem(a->dir);
    }
}

// Em-Ordem
void emOrdem(Arv* a) {
    if (!vazia(a)) {
        emOrdem(a->esq);
        cout << a->info << " ";
        emOrdem(a->dir);
    }
}

// Pós-Ordem
void posOrdem(Arv* a) {
    if (!vazia(a)) {
        posOrdem(a->esq);
        posOrdem(a->dir);
        cout << a->info << " ";
    }
}

// Funcao contaNos - enunciado 2
int contaNos(Arv* a) {

    if (a == nullptr){
        return 0;
    }

    return 1 + contaNos(a->esq)+ contaNos(a->dir);
}

int main() {
    Arv* a = cria('a',
        cria('b', inicializa(),
        cria('d', inicializa(), inicializa())),
        cria('c', cria('e',
        cria('g', inicializa(), inicializa()), inicializa()),
        cria('f', inicializa(), inicializa())));

    cout << "Impressao basica: ";
    imprime(a);
    cout << endl;

    // enunciado 1
    cout << "Pre-Ordem: ";
    preOrdem(a);
    cout << endl;

    cout << "Em-Ordem: ";
    emOrdem(a);
    cout << endl;

    cout << "Pos-Ordem: ";
    posOrdem(a);
    cout << endl;

    // enunciado 3
    cout << "Total de nos na arvore: [" << contaNos(a) << "]" << endl;

    libera(a);

    return 0;
}
