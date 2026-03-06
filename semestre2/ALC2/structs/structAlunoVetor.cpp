#include <iostream>

using namespace std;

struct Aluno {
    int matricula;
    string nome;
    bool bolsista;
    int idade;
};

int main (){
    const int QTD_ALUNO = 3;
    Aluno alu[QTD_ALUNO];
    string bolsa;

    for (int i = 0; i < QTD_ALUNO; i++){
        cout << "Aluno Numero " << (i + 1) << endl;

        cout << "Informe a matricula do aluno: ";
        cin >> alu[i].matricula;

        cout << "Informe o nome do aluno: ";
        cin >> alu[i].nome;

        cout << "Informe se o aluno e bolsista (S/N): ";
        cin >> bolsa;
        alu[i].bolsista = ((bolsa == "S") ? true : false);

        cout << "Informe a idade do aluno: ";
        cin >> alu[i].idade;

        cout << endl;
    }

    system("cls");

    // Funcao para busca do aluno
    int busca;
    cout << "Informe a matricula do aluno a ser pesquisado: ";
    cin >> busca;

        for (int i = 0; i < QTD_ALUNO; i++){
        cout << "Aluno Numero" << (i + 1) << endl;

        //cout << "Matricula: " << alu[i].matricula << endl;
        cout << "Nome: " << alu[i].nome << endl;
        cout << "Bolsista: " << ((alu[i].bolsista == true) ? "Sim" : "Nao") << endl;
        cout << "Idade: " << alu[i].idade << endl;

        cout << endl;
        break;
    }
}
