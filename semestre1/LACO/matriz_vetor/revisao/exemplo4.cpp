#include <iostream>

using namespace std;

int main () {
	string aluno[5];
	int i, alunoAcimaMedia = 0;
	double n1[5], n2[5], media[5], somaMedia = 0, mediaTurma = 0;

	for (i = 1; i <= 4; i++){
		cout << "Aluno " << i << endl;
		
		cout << "Nome: ";
		cin >> aluno[i];
		
		cout << "Primeira nota: ";
		cin >> n1[i];
		
		cout << "Segunda nota: ";
		cin >> n2[i];
		
		media[i] = (n1[i] + n2[i]) / 2;
		somaMedia = somaMedia + media[i];
		
	}
	
	mediaTurma = somaMedia / 4;
	
	cout << endl;
	cout << "LISTAGEM DE ALUNOS" << endl;
	cout << endl;
	
	for (i = 1; i <= 4; i++){
		cout << aluno[i] << " : " << media[i] << endl;
		if (media[i] > mediaTurma) {
			alunoAcimaMedia = alunoAcimaMedia + 1;
		}
	}
	
	cout << "Ao todo temos " << alunoAcimaMedia << " alunos acima da medida da turma que e " << mediaTurma << endl;
}
