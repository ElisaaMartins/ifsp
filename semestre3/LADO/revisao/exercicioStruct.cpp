#include <iostream>
#include <string>

using namespace std;

struct tarefaSistema {
    string nomeFuncionalidade;
    string nomeDesenvolvedor;
    int horasEstimadas;
};

int main()
{
    tarefaSistema tarefas[3];

    int total = 0;

    for(int i = 0; i < 3; i++){
        cout << "Funcionalidade " << (i + 1) << " : ";
        cin >> tarefas[i].nomeFuncionalidade;
        cout << endl;

        cout << "Desenvolvedor " << (i + 1) << " : ";
        cin >> tarefas[i].nomeDesenvolvedor;
        cout << endl;

        cout << "Horas trabalhadas: ";
        cin >> tarefas[i].horasEstimadas;
        cout << endl;

        total += tarefas[i].horasEstimadas;

    }

    cout << "Total de horas que a equipe trabalhara para concluir as funcionalidades: " << total;





}
