#include <iostream>

using namespace std;

const int QTD_MORADOR = 2,
          QTD_APARTAMENTO = 2,
          QTD_BLOCO = 2;

struct Morador {
    string nome;
    int idade;
    bool responsavel;
};

struct Apartamento {
    int andar;
    int numero;
    bool cobertura;
    Morador morador[QTD_MORADOR];
};

struct Bloco {
    int numero;
    string apelido;
    bool construcao;
    Apartamento apartamento[QTD_APARTAMENTO];
};

struct Condomino {
    int numero;
    string endereco;
    Bloco bloco[QTD_BLOCO];
};

void getCondominio (Condomino cond){
    system("cls");

    int total = 0;

    cout << "=== CONDOMINIO ===" << endl;
    cout << "\tNumero " << cond.numero << endl;
    cout << "\tCondomino: " << cond.endereco << endl;
    cout << endl;

    for (int i = 0; i < QTD_BLOCO; i++){
        cout << "=== BLOCOS ===" << endl;
        cout << "\tNumero " << cond.bloco[i].numero << endl;
        cout << "\tApelido " << cond.bloco[i].apelido << endl;
        cout << "\tConstricao " << ((cond.bloco[i].construcao == true) ? "Sim" : "Nao") << endl;
        cout << endl;

        for (int j = 0; j < QTD_APARTAMENTO; j++){
            cout << "=== APARTAMENTOS ===" << endl;
            cout << "\tAndar " << cond.bloco[i].apartamento[j].andar << endl;
            cout << "\tNumero " << cond.bloco[i].apartamento[j].numero << endl;
            cout << "\tCobertura " << ((cond.bloco[i].apartamento[j].cobertura == true) ? "Sim" : "Nao") << endl;
            cout << endl;

            for (int k = 0; k < QTD_MORADOR; k++){
                cout << "=== MORADORES ===" << endl;
                cout << "\tNome " << cond.bloco[i].apartamento[j].morador[k].nome << endl;
                cout << "\tIdade " << cond.bloco[i].apartamento[j].morador[k].idade << endl;
                cout << "\tResponsavel " << ((cond.bloco[i].apartamento[j].morador[k].responsavel == true) ? "Sim" : "Nao") << endl;
                cout << endl;

                if (cond.bloco[i].apartamento[j].morador[k].idade <= 18){
                    total +=1;
                }


            }
        }
    }

    cout << "Total de moradores maiores de 18 anos = " << total << endl;
}

int main (){
    Condomino cond;

    cout << "=== INFORMACOES CONDOMINIO ===" << endl;
    cout << "Numero condominio: ";
    cin >> cond.numero;

    cout << "Endereco condomino: ";
    //getline(cin, cond.endereco);
    cin >> cond.endereco;

    cout << endl;

    for (int i = 0; i < QTD_BLOCO; i++){
        cout << "=== BLOCO " << (i + 1) << " ===" << endl;
        cout << "Numero bloco: ";
        cin >> cond.bloco[i].numero;

        cout << "Apelido bloco: ";
        cin >> cond.bloco[i].apelido;

        string construcao;
        cout << "Eh construcao (S/N): ";
        cin >> construcao;
        cond.bloco[i].construcao = ((construcao == "S") ? true : false);

        cout << endl;

            for (int j = 0; j < QTD_APARTAMENTO; j++){
                cout << "=== APARTAMENTO " << (j + 1) << " ===" << endl;
                cout << "Andar apartamento: ";
                cin >> cond.bloco[i].apartamento[j].andar;

                cout << "Numero apartamento: ";
                cin >> cond.bloco[i].apartamento[j].numero;

                string cobertura;
                cout << "Eh cobertura (S/N): ";
                cin >> cobertura;
                cond.bloco[i].apartamento[j].cobertura = ((cobertura == "S") ? true : false);

                cout << endl;

                    for (int k = 0; k < QTD_MORADOR; k++){
                        cout << "=== MORADOR " << (k + 1) << " ===" << endl;
                        cout << "Nome morador: ";
                        cin >> cond.bloco[i].apartamento[j].morador[k].nome;

                        cout << "Idade morador: ";
                        cin >> cond.bloco[i].apartamento[j].morador[k].idade;

                        string responsavel;
                        cout << "Eh o responsavel (S/N): ";
                        cin >> responsavel;
                        cond.bloco[i].apartamento[j].morador[k].responsavel = ((responsavel == "S") ? true : false);

                        cout << endl;
                    }
            }
    }

    getCondominio(cond);

}
