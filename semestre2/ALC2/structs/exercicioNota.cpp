#include <iostream>

using namespace std;

const int QTD_ITENS = 2;

struct Item {
    int numero;
    string produto;
    int qtd;
    double valor_unitario;
};

struct Nota {
    int numero;
    string empresa;
    string data;
    Item itens[QTD_ITENS];
};


void getNota(Nota pNota){
    system("cls");

    cout << "=== NOTA ===" << endl;

    cout << "NF: " << pNota.numero << endl;
    cout << "Empresa: " << pNota.empresa << endl;
    cout << "Data Emissao: " << pNota.data << endl;

    cout << endl;

    double total = 0;
    cout << "=== ITENS ===" << endl;
    //cout << "\tNumero\tProduto\tQuant\tValor\tTotal" << endl;

    for (int i = 0; i < QTD_ITENS; i++){
        double total_item = 0;
        /*cout << "\t" << nota.itens[i].numero << "\t"
             << nota.itens[i].produto << "\t"
             << nota.itens[i].qtd << "\t"
             << nota.itens[i].valor_unitario << "\t"
             << (nota.itens[i].qtd * nota.itens[i].valor_unitario);*/

        cout << "\t Numero: " << pNota.itens[i].numero << endl;
        cout << "\t Produto: " << pNota.itens[i].produto << endl;
        cout << "\t Quantidade: " << pNota.itens[i].qtd << endl;
        cout << "\t Valor Unitario: " << pNota.itens[i].valor_unitario << endl;

        cout << "\t Valor total: " << (pNota.itens[i].qtd * pNota.itens[i].valor_unitario) << endl;

        total_item += pNota.itens[i].valor_unitario*pNota.itens[i].qtd;
        cout << "\t Total item: " << total_item << endl;

        total = total + total_item;

        cout << endl;
    }

    cout << "TOTAL: " << total << endl;
}


int main (){
    Nota nota;

    cout << "NF: ";
    cin >> nota.numero;

    cout << "Empresa: ";
    cin >> nota.empresa;

    cout << "Data emissao: ";
    cin >> nota.data;

     cout << endl;

    for (int i = 0; i < QTD_ITENS; i++){
        cout<< "ITEM " << (i + 1) << endl;

        cout << "Numero item: ";
        cin >> nota.itens[i].numero;

        cout << "Produto: ";
        cin >> nota.itens[i].produto;

        cout << "Quantidade: ";
        cin >> nota.itens[i].qtd;

        cout << "Valor unitario: ";
        cin >> nota.itens[i].valor_unitario;

        cout << endl;
    }

    getNota(nota);
}
