/* Crie um programa que declare uma estrutura (registro) para o cadastro de
alunos.
    (a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano de nascimento.
    (b) Ao início do programa, o usuário deverá informar o número de alunos que serão
    armazenados
    (c) O programa deverá alocar dinamicamente a quantidade necessária de memória para armazenar os registros dos alunos.
    (d) O programa deverá pedir ao usuário que entre com as informações dos alunos.
    (e) Ao final, mostrar os dados armazenados e liberar a memória alocada.
*/

#include <iostream>
#include <string>

using namespace std;

struct TAluno { /* item a */
     int matricula;
     string sobrenome;
     int anoNascimento;
};

int main() {
    int qtdAlunos;

    cout << "Informe o numero de alunos a serem cadastrados: "; /* item b */
    cin >> qtdAlunos;

    TAluno* vetorAlunos = new TAluno[qtdAlunos];

    // lendo dados
    for (int i = 0; i < qtdAlunos; i++) {
        cout << "\nDados do aluno " << (i + 1) << ":" << endl;

        cout << "Matricula: ";
        cin >> vetorAlunos[i].matricula;

        cout << "Sobrenome: ";
        cin >> vetorAlunos[i].sobrenome;

        cout << "Ano de nascimento: ";
        cin >> vetorAlunos[i].anoNascimento;
     }

     cout << "\n--- Alunos Cadastrados ---" << endl;

     for (int i = 0; i < qtdAlunos; i++) {
        cout << "Aluno " << (i + 1) << " | " <<
                "Matricula: " << vetorAlunos[i].matricula << " | " <<
                "Sobrenome: " << vetorAlunos[i].sobrenome << " | " <<
                "Ano de Nascimento: " <<vetorAlunos[i].anoNascimento << endl;
     }

     delete[] vetorAlunos;

     return 0;
}
