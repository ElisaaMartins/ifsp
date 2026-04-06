#include <iostream>
#include <fstream>

using namespace std;

const int QTD_FUNC = 2;

struct Funcionario {
	string nome;
	double salario;
	int anosEmpresa;
};

double getSalReajustado(int pAC, double pSalario) {
	if (pAC > 10) {
		return pSalario*1.1;
	} else if ((pAC >= 5) && (pAC < 10)) {
		return pSalario*1.05;
	} else {
		return pSalario*1.02;
	}
}

void getFuncionarios(Funcionario func[]) {
	system("cls");
	cout<<"Nome Salario Anos Reajustado"<<endl;
	int i = 0;
	while (i < QTD_FUNC) {

		double reajuste = getSalReajustado(func[i].anosEmpresa, func[i].salario);
		cout<<func[i].nome<<"\t"<<func[i].salario<<"\t"<<func[i].anosEmpresa<<"\t"<<reajuste<<endl;

		i++;
	}
}

// para salvar no arquivo
void salvar(string pConteudo) {
	ofstream arquivo;

	arquivo.open("funcionarios.txt", ios::app);

	arquivo<<pConteudo<<endl;

	arquivo.close();
}

int main() {
	Funcionario func[QTD_FUNC];

	int i = 0;
	while (i < QTD_FUNC) {

		cout<<"Informe o nome do funcionario "<<endl;
		cin>>func[i].nome;

		cout<<"Informe o salario do funcionario"<<endl;
		cin>>func[i].salario;

		cout<<"Informe os anos de casa do funcionario"<<endl;
		cin>>func[i].anosEmpresa;

		// Monta uma linha para salvar - o jeito que quer que salve no arquivo
		// criar uma string para depois chamar ela na funcao de salvar
		string linha = func[i].nome + ";" + to_string(func[i].salario) + ";" + to_string(func[i].anosEmpresa) + ";";

		i++;

		salvar(linha);
	}

	getFuncionarios(func);

}
