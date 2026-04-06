#include <iostream>
#include <fstream>
#include <stdexcept>
// criar pasta
// #include <filesystem>

using namespace std;
// namespace fs = std::filesystem;

const int QTD_ALUNOS = 2;

struct Aluno {
	string nome;
	double nota[3];
	double media;
};

double getMedia(double n1, double n2, double n3) {
	return 0.2*n1 + 0.7*n2 + 0.1*n3;
}

void getAlunos(Aluno alu[]) {
	system("cls");
	cout<<"Nome  Nota 1  Nota 2  Nota 3  Media  Situacao"<<endl;
	for (int i=0;i<QTD_ALUNOS;i++) {
		string situacao = ((alu[i].media >=6) ? "Aprovado": "Reprovado");
		cout<<alu[i].nome<<"\t"<<alu[i].nota[0]<<"\t"<<alu[i].nota[1]<<"\t"<<alu[i].nota[2]<<"\t"<<alu[i].media<<"\t"<<situacao<<endl;
	}
}

void salvar(string pNome, double pNota1, double pNota2,double pNota3, double pMedia){
    // 	fs::create_directory("arquivos");
	ofstream arquivo;

	arquivo.open("arquivos/registro.txt", ios::app); // nao cria a pasta


	for (int i = 0; i < QTD_ALUNOS; i++){
	arquivo << "aluno: " << pNome<< " nota1: " << pNota1 << " nota2: " << pNota2 << " nota3: " << pNota3 << " media: " << pMedia << endl;
	}

	arquivo.close();
}


int main() {

	Aluno alu[QTD_ALUNOS];


	for (int i=0;i<QTD_ALUNOS;i++) {
		cout<<"Informe o nome do aluno "<<(i+1)<<endl;
		cin>>alu[i].nome;

		cout<<"Informe a nota 1 do aluno"<<endl;
		cin>>alu[i].nota[0];

		cout<<"Informe a nota 2 do aluno"<<endl;
		cin>>alu[i].nota[1];

		cout<<"Informe a nota 3 do aluno"<<endl;
		cin>>alu[i].nota[2];

		//alu[i].media = getMedia(alu[i].nota[0],alu[i].nota[1],alu[i].nota[2]);


		salvar(alu[i].nome, alu[i].nota[0], alu[i].nota[1], alu[i].nota[2], alu[i].media);


	}
	getAlunos(alu);

}
