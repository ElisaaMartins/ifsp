#include <iostream>

using namespace std;
const int MAX = 50;
typedef int TIPOCHAVE;

struct REGISTRO {
    TIPOCHAVE chave;
};

struct LISTA {
    REGISTRO A[MAX];
    int nroElem;
};

void inicializaLista(LISTA* l) {
    l->nroElem = 0;
}

bool inserirElemLista(LISTA* l, REGISTRO reg){
    if (l->nroElem == MAX)
        return false;
    l->A[l->nroElem] = reg;
    l->nroElem++;
    return true;
    }


void exibirLista(LISTA* l) {
    if (l->nroElem == 0) {
        cout << "(vazia)";
    }
    for (int i = 0; i < l->nroElem; i++) {
        cout << l->A[i].chave << " ";
    }
    cout << endl;
}

void listaPar(LISTA* lOrigem, LISTA* lPar) {
    inicializaLista(lPar);
    for (int i = 0; i < lOrigem->nroElem; i++) {
        if (lOrigem->A[i].chave % 2 == 0) {
            inserirElemLista(lPar, lOrigem->A[i]);
        }
    }
}

int main() {
    LISTA origem, pares;
    inicializaLista(&origem);

    REGISTRO reg;
    int listaValores[] = {12, 7, 18, 25, 30};

    for(int val : listaValores){
        reg.chave = val;
        inserirElemLista(&origem, reg);
    }

    listaPar(&origem, &pares);

    exibirLista(&origem);
    exibirLista(&pares);

    return 0;
}
