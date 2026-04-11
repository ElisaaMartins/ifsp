#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

const int QTD_FUNC = 2;

struct Funcionario{
    int codigo;
    string nome;
    int idade;
    bool gerente;
};


void salvar(Funcionario pFunc) {
	ofstream arquivo;

	arquivo.open("arquivos/registro.txt", ios::app);

	int ger = ((pFunc.gerente == true) ? 1 : 0);

	arquivo << pFunc.codigo << ";" <<pFunc.nome << ";" << pFunc.idade << ";" << ger << ";" << endl;

	arquivo.close();
}

void cadFuncionario() {
    Funcionario func[QTD_FUNC];

	for (int i = 0; i < QTD_FUNC; i++){
        cout << "FUNCIONARIO " << (i + 1) << endl;

        cout << "codigo: ";
        cin >> func[i].codigo;

        cout << "nome: ";
        cin >> func[i].nome;

        cout << "idade: ";
        cin >> func[i].idade;

        string gerente;
        cout << "gerente (S/N): ";
        cin >> gerente;
        func[i].gerente = ((gerente == "S" || gerente == "s") ? true : false);


        // string linha = to_string(func[i].codigo) + ";" + func[i].nome + ";" + to_string(func[i].idade) + ";" + to_string(func[i].gerente) + ";";
        // salvar(linha);

        salvar(func[i]);

    }
}

void buscaFuncionario(){
    ifstream arquivo("arquivos/registro.txt");
    string linha, parte;

    char delimitador = ';';
    int codigo;

    cout << "codigo busca: ";
    cin >> codigo;

	//string nome;
	//cout<<"Informe o nome a ser buscado"<<endl;
	//cin>>nome;

    if(arquivo.is_open()){
        while (getline(arquivo, linha)) {
            stringstream registro(linha);
            vector<string> campos;

            while(getline(registro, parte, delimitador)){
                campos.push_back(parte);
            }

            if(stoi(campos[0]) == codigo){
   				//if (campos[1] == nome) {

                cout << "codigo: " << campos[0] << endl;
                cout << "nome: " << campos[1] << endl;
                cout << "idade: " << campos[2] << endl;
                cout << "gerente: " << ((stoi(campos[3]) == 1) ? "sim" : "nao") << endl;
                break;

            }
        }
    }
    arquivo.close();
}

int main() {
	string continuar = "S";

	while (continuar == "S") {
	    system("cls");
		int opcao;
		cout << "Informe a opcao: " << endl;
		cout << "1 - Cadastrasr Funcionario" << endl;
		cout << "2 - Buscar Funcionario" << endl;
		cin>>opcao;

		switch (opcao) {
			case 1: cadFuncionario();
		        	break;
			case 2: buscaFuncionario();
					break;
			default: cout << "Opcao incorreta" << endl;
                    break;
		}

		cout<<"Deseja continuar ? (S/N) ";
		cin>>continuar;
	}




}
