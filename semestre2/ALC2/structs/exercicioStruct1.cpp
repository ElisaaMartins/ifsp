#include <iostream>

using namespace std;

const int QTD_ALUNO = 5;

struct Aluno {
    string nome;
    double nota1;
    double nota2;
    double nota3;
    double media;
};

void getAluno(Aluno alu[QTD_ALUNO]){
    system("cls");

    for (int i = 0; i < QTD_ALUNO; i++){
        alu[i].media = (0.2 * alu[i].nota1) + (0.7 * alu[i].nota2) + (0.1 * alu[i].nota3);

        cout << "ALUNO " << (i + 1) << endl;

        cout << endl;

        cout << "\tNome: " << alu[i].nome << endl;
        cout << "\tNota 1: " << alu[i].nota1 << endl;
        cout << "\tNota 2: " << alu[i].nota2 << endl;
        cout << "\tNota 3: " << alu[i].nota3 << endl;
        cout << "\tMedia: " << alu[i].media << endl;
        cout << "\t------------" << endl;

        /*if (alu[i].media[i] >= 6){
            cout << "\t APROVADO";
        } else {
            cout << "\t REPROVADO";
        }*/

        cout << ((alu[i].media >= 6) ? "\tAPROVADO" : "\tREPROVADO") << endl;

        cout << endl;
    }
}

int main (){
    Aluno alu[QTD_ALUNO];

    for (int i = 0; i < QTD_ALUNO; i++){
        cout << "ALUNO " << (i + 1) << endl;
        cout << "Nome: ";
        cin >> alu[i].nome;

        cout << "Nota 1: ";
        cin >> alu[i].nota1;

        cout << "Nota 2: ";
        cin >> alu[i].nota2;

        cout << "Nota 3: ";
        cin >> alu[i].nota3;

        cout << endl;
    }

    getAluno(alu);
}

