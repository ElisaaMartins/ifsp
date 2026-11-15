#include <iostream>

using namespace std;

// 1. Definição da estrutura do nó da árvore
struct Arv {
    char info;
    struct Arv* esq;
    struct Arv* dir;
};

// 2. Inicializa a árvore (retorna nullptr)
Arv* inicializa(void)
{
    return nullptr;
}

// 3. Cria um novo nó com um caractere e ponteiros para subárvores esquerda e direita
Arv* cria(char c, Arv* sae, Arv* sad){
    Arv* p = new Arv;
    p->info = c;
    p->esq = sae;
    p->dir = sad;
    return p;
}

// 4. Verifica se a árvore está vazia
bool vazia(Arv* a)
{
    return a == nullptr;
}

// 5. Imprime a árvore (percurso padrão implementado na imagem correspondente)
void imprime (Arv* a)
{
    if (!vazia(a)){
        cout << a->info;
        imprime(a->esq); /* mostra sae */
        imprime(a->dir); /* mostra sad */
    }
}

// 6. Libera a memória alocada dinamicamente para a árvore
Arv* libera(Arv* a) {
    if (!vazia(a)) {
        libera(a->esq); // libera subárvore esquerda
        libera(a->dir); // libera subárvore direita
        delete a;       // libera o nó atual (raiz)
    }
    return nullptr;
}

// 7. Percurso Pré-Ordem
void preOrdem(Arv* a) {
    if (!vazia(a)) {
        cout << a->info << " ";
        preOrdem(a->esq);
        preOrdem(a->dir);
    }
}

// 8. Percurso Em-Ordem (Simétrica)
void emOrdem(Arv* a) {
    if (!vazia(a)) {
        emOrdem(a->esq);
        cout << a->info << " ";
        emOrdem(a->dir);
    }
}

// 9. Percurso Pós-Ordem
void posOrdem(Arv* a) {
    if (!vazia(a)) {
        posOrdem(a->esq);
        posOrdem(a->dir);
        cout << a->info << " ";
    }
}

int qtdNos(Arv* a){
    if(vazia(a))
        return 0; // condicao de parada
    return 1 + qtdNos(a->esq) + qtdNos(a->dir); // soma de 1 (a raiz) + todos os nos a esquerda +  todos os nos a direita
}


// 10. Função principal (main)
int main() {
    Arv* a = cria('a',
        cria('b', inicializa(),
        cria('d', inicializa(), inicializa())),
        cria('c', cria('e', inicializa(), inicializa()),
        cria('f', inicializa(), inicializa())) );

    // arvore completa
    Avr* b = cria('a',
                  cria('b', cria('d', inicializa(), inicializa()), cria('e', inicializa(), inicializa())),
                  cria('c', cria('f', inicializa(), inicializa()), cria('g', inicializa(), inicializa()))
                  );



    cout << "Impressao basica: ";
    imprime(a);
    cout << endl;

    cout << "Pre-Ordem: ";
    preOrdem(a);
    cout << endl;

    cout << "Em-Ordem: ";
    emOrdem(a);
    cout << endl;

    cout << "Pos-Ordem: ";
    posOrdem(a);
    cout << endl;

    libera(a);

    return 0;
}
