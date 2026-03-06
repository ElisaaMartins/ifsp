#include <iostream>

using namespace std;

const int QTD_ITENS = 3;

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
}

    system("cls");

    cout << "NF: " << nota.numero << endl;
    cout << "Empresa: " << nota.empresa << endl;
    cout << "Data Emissao: " << nota.data << endl;

    cout << endl;

    cout << "=== ITENS ===" << endl;

    for (int i = 0; i < QTD_ITENS; i++){
        /*cout << "Numero|\t Produto|\t Quantidade|\t Valor Unitario|\t Valor Total" << endl;

        cout << "\t" << nota.itens[i].numero << " |\t" << nota.itens[i].produto << " |\t" <<  nota.itens[i].qtd << " |\t"
        << nota.itens[i].valor_unitario << " |\t" << (nota.itens[i].qtd * nota.itens[i].valor_unitario);*/


        cout << "\t Numero: " << nota.itens[i].numero << endl;
        cout << "\t Produto: " << nota.itens[i].produto << endl;
        cout << "\t Quantidade: " << nota.itens[i].qtd << endl;
        cout << "\t Valor Unitario: " << nota.itens[i].valor_unitario << endl;

        cout << "\t Valor total: " << (nota.itens[i].qtd * nota.itens[i].valor_unitario) << endl;

        cout << endl;
    }

}
