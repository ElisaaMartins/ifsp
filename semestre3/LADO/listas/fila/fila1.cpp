#include <iostream>
#include <cstdlib>

using namespace std;

struct No {
    float info;
    No* prox;
};

struct Fila {
    No* ini;
    No* fim;
};

// Função adicionada para inicializar a fila (ausente nas imagens)
Fila* cria() {
    Fila* f = new Fila;
    f->ini = nullptr;
    f->fim = nullptr;
    return f;
}

bool vazia(Fila* f) {
    return (f->ini == nullptr);
}

void insere(Fila* f, float v) {
    No* p = new No;
    if (!p) {
        cerr << "Erro de alocação\n";
        exit(1);
    }
    p->info = v;
    p->prox = nullptr;

    if (f->fim != nullptr)
        f->fim->prox = p;

    f->fim = p;

    if (f->ini == nullptr)
        f->ini = p;
}

float retira(Fila* f) {
    if (vazia(f)) {
        cerr << "Fila vazia.\n";
        exit(1);
    }
    No* p = f->ini;
    float v = p->info;

    f->ini = f->ini->prox;
    delete p;

    if (f->ini == nullptr)
        f->fim = nullptr;

    return v;
}

void imprime(Fila* f) {
    for (No* q = f->ini; q != nullptr; q = q->prox)
        cout << q->info << "\n";
}

void libera(Fila* f) {
    No* q = f->ini;
    while (q != nullptr) {
        No* t = q->prox;
        delete q;
        q = t;
    }
    delete f;
}

int main() {
    Fila* f = cria(1, 2, 3, 4, 5);

    cout << "Primeiro elemento: " << retira(f) << "\n";
    cout << "Segundo elemento: " << retira(f) << "\n";
    cout << "Configuração da fila:\n";
    imprime(f);

    libera(f);
    return 0;
}
