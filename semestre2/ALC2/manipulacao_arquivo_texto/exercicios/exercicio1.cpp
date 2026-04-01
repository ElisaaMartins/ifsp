#include <iostream>
using namespace std;

struct Funcionario {
    string nome;
    int idade;
    string cargo;
    double salario;
};

struct Departamento {
    int codigo;
    string descricao;
    string sigla;
    Funcionario funcionario[6];
    int qtdFuncionarios;
};

struct Filial {
    int codigo;
    string cidade;
    string ramo;
    Departamento departamento[3];
    int qtdDepartamentos;
};

struct Empresa {
    long long CNPJ;
    string nome;
    string endereco;
    Filial filial[5];
};

int main(){
    Empresa empresa;
    double totalSalario = 0;

    // Dados da empresa
    cout << "Nome da empresa: ";
    getline(cin, empresa.nome);

    cout << "Endereco: ";
    getline(cin, empresa.endereco);

    cout << "CNPJ: ";
    cin >> empresa.CNPJ;

    cout << endl;

    // Loop de filiais
    for(int i = 0; i < 5; i++){
        cout << "=== FILIAL " << i+1 << " ===" << endl;

        cout << "Codigo: ";
        cin >> empresa.filial[i].codigo;

        cout << "Cidade: ";
        cin.ignore();
        getline(cin, empresa.filial[i].cidade);

        cout << "Ramo: ";
        getline(cin, empresa.filial[i].ramo);

        cout << "Quantidade de departamentos (max 3): ";
        cin >> empresa.filial[i].qtdDepartamentos;

        cout << endl;

        // Loop de departamentos
        for(int j = 0; j < empresa.filial[i].qtdDepartamentos; j++){
            cout << "=== DEPARTAMENTO " << j+1 << " ==="<< endl;

            cout << "Codigo: ";
            cin >> empresa.filial[i].departamento[j].codigo;

            cout << "Descricao: ";
            cin.ignore();
            getline(cin, empresa.filial[i].departamento[j].descricao);

            cout << "Sigla: ";
            getline(cin, empresa.filial[i].departamento[j].sigla);

            cout << "Quantidade de funcionarios (max 6): ";
            cin >> empresa.filial[i].departamento[j].qtdFuncionarios;

            cout << endl;

            // Loop de funcionários
            for(int k = 0; k < empresa.filial[i].departamento[j].qtdFuncionarios; k++){
                cout << "=== FUNCIONARIO " << k+1 << " ===" << endl;

                cin.ignore();
                cout << "Nome: ";
                getline(cin, empresa.filial[i].departamento[j].funcionario[k].nome);

                cout << "Idade: ";
                cin >> empresa.filial[i].departamento[j].funcionario[k].idade;

                cout << "Cargo: ";
                cin.ignore();
                getline(cin, empresa.filial[i].departamento[j].funcionario[k].cargo);

                cout << "Salario: ";
                cin >> empresa.filial[i].departamento[j].funcionario[k].salario;

                totalSalario += empresa.filial[i].departamento[j].funcionario[k].salario;
            }
        }
    }

    cout << endl;

    // RELATÓRIO
    cout << "===== RELATORIO =====" << endl;

    for(int i = 0; i < 5; i++){
        cout << "Filial: " << empresa.filial[i].cidade << endl;

        for(int j = 0; j < empresa.filial[i].qtdDepartamentos; j++){
            cout << "Departamento: "
                 << empresa.filial[i].departamento[j].sigla << endl;

            for(int k = 0; k < empresa.filial[i].departamento[j].qtdFuncionarios; k++){
                cout << " Funcionario: "
                     << empresa.filial[i].departamento[j].funcionario[k].nome
                     << " | Cargo: "
                     << empresa.filial[i].departamento[j].funcionario[k].cargo
                     << " | Salario: "
                     << empresa.filial[i].departamento[j].funcionario[k].salario
                     << endl;
            }
        }
    }

    cout << "Folha total da empresa: " << totalSalario << endl;
}
