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

int tamanho(LISTA* l) {
    return l->nroElem;
}

void exibirLista(LISTA* l) {
    int i;
    if (l->nroElem == 0) {
        cout << "(vazia)";
    }
    for (i = 0; i < l->nroElem; i++) {
        cout << l->A[i].chave << " ";
    }
    cout << endl;
}

int buscaSequencial(LISTA* l, TIPOCHAVE ch) {
    for (int i = 0; i < l->nroElem; i++) {
        if (l->A[i].chave == ch) {
            return i; // Retorna o �ndice onde o elemento foi encontrado
        }
    }
    return -1; // Retorna -1 caso o elemento n�o esteja na lista
}

// Inser��o autom�tica no final da lista (sem o par�metro 'i')
bool inserirElemLista(LISTA* l, REGISTRO reg) {
    if (l->nroElem >= MAX)
        return false;

    l->A[l->nroElem] = reg;
    l->nroElem++;
    return true;
}

bool excluirElemLista(TIPOCHAVE ch, LISTA* l) {
    int pos, j;
    pos = buscaSequencial(l, ch);
    if(pos == -1)
       return false;
    for(j = pos; j < l->nroElem-1; j++)
       l->A[j] = l->A[j+1];
    l->nroElem--;
    return true;
}

void reinicializarLista(LISTA* l) {
    l->nroElem = 0;
}


int main() {
    LISTA l1;
    inicializaLista(&l1);

    cout << "=== DEMONSTRACAO DA LISTA SEQUENCIAL ===" << endl;
    cout << "Tamanho inicial: " << tamanho(&l1) << endl;
    cout << endl;

    // 1. Inserindo elementos
    cout << "Inserindo elementos..." << endl;
    inserirElemLista(&l1, {10}); // Insere 10 na posicao 0
    inserirElemLista(&l1, {20}); // Insere 20 na posicao 1
    inserirElemLista(&l1, {30}); // Insere 30 na posicao 2
    inserirElemLista(&l1, {15}); // Insere 15 na posicao 1 (no meio)

    exibirLista(&l1);
    cout << "Tamanho atual: " << tamanho(&l1) << endl;
    cout << endl;

    // 2. Buscando elemento
    TIPOCHAVE busca = 20;
    int pos = buscaSequencial(&l1, busca);
    if (pos != -1) {
        cout << "Elemento " << busca << " encontrado no indice: " << pos << endl;
    } else {
        cout << "Elemento " << busca << " nao encontrado." << endl;
    }
    cout << endl;

    // 3. Excluindo elemento
    TIPOCHAVE exclui = 15;
    cout << "Excluindo o elemento " << exclui << "..." << endl;
    if (excluirElemLista(exclui, &l1)) {
        cout << "Elemento excluido com sucesso!" << endl;
    } else {
        cout << "Erro ao excluir elemento." << endl;
    }

    exibirLista(&l1);
    cout << "Tamanho apos exclusao: " << tamanho(&l1) << endl;
    cout << endl;

    // 4. Reinicializando a lista
    cout << "Reinicializando a lista..." << endl;
    reinicializarLista(&l1);
    exibirLista(&l1);
    cout << "Tamanho final: " << tamanho(&l1) << endl;

    return 0;
}
