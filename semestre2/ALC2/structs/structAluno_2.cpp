#include <iostream>

using namespace std;

const int QTD_ALUNOS = 3; // para que cada aluno tenha um curso
struct Aluno {
    int matricula;
    string nome;
    bool bolsista;
    int idade;
};

struct Curso {
    string nome;
    int ano;
    Aluno alunos[QTD_ALUNOS]; // interaçao entre estruturas
};

int main (){
    Curso curso; // so declara aquilo que tem todas as "coisas"

    cout << "Nome do curso: ";
    cin >> curso.nome;

    cout << "Ano de implantaçao: ";
    cin >> curso.ano;

    cout << endl;

    for(int i = 0; i < QTD_ALUNOS; i++){
        cout<< "Aluno " << (i + 1) << endl;
        cout<< "Matricula do aluno: ";
        cin >> curso.alunos[i].matricula; // cada matricula pra cada aluno por isso alunos[i].matricula

        cout<< "Nome do aluno: ";
        cin >> curso.alunos[i].nome;

        cout<< "Idade do aluno: ";
        cin >> curso.alunos[i].idade;

        cout << endl;
    }

    system("cls");

    cout << "=== CURSO ===" << endl;
    cout << "\t Nome: " << curso.nome << endl;
    cout << "\t Ano: " << curso.ano << endl;

    cout << endl;

    cout << "=== ALUNOS ===" << endl;
    for (int i = 0; i < QTD_ALUNOS; i++){
        cout << "\t Matricula: " << curso.alunos[i].matricula << endl;
        cout << "\t Nome: " << curso.alunos[i].nome << endl;
        cout << "\t Idade: " << curso.alunos[i].idade << endl;
    }

}
