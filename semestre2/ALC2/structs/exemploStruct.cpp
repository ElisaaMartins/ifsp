#include <iostream>

using namespace std;

// criando o tipo de variavel
struct Aluno {
    int matricula;
    string nome;
    bool bolsista;
    int idade;
};

int main (){
    // usando o tipo criado
    Aluno alu;

    cout << "Informe a matricula do aluno: ";
    cin >> alu.matricula; //subelemento

    cout << "Informe o nome do aluno: ";
    cin >> alu.nome;

    string bolsa;
    cout << "Informe se o aluno e bolsista (S/N): ";
    cin >> bolsa;

    // ternario true false para aluno bolsista
    // alu.bolsista = ((bolsa == "S") ? true : false);

    if (bolsa == "S") {
        true;
    } else {
        false;
    }

    cout << "Informe a idade do aluno: ";
    cin >> alu.idade;

    system("cls");
    cout << "Matricula: " << alu.matricula << endl;
    cout << "Nome: " << alu.nome << endl;
    cout << "Bolsista: " << ((alu.bolsista == true) ? "Sim" : "Nao") << endl;
    cout << "Idade: " << alu.idade << endl;
}
