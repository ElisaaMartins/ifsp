#include <iostream>
#include <fstream>

using namespace std;

const int QTD_ITENS = 2;

struct Item {
	int numero;
	string produto;
	int qtd;
	double valor_unitario;
};

struct Nota {
	int numero;
	string empresa;
	string data;
	Item itens[QTD_ITENS];
};


void getNota(Nota pNota) {
	system("cls");

	cout<<"==== NOTA ====="<<endl;
	cout<<"Numero: "<<pNota.numero<<endl;
	cout<<"Empresa: "<<pNota.empresa<<endl;
	cout<<"Data de emissao"<<pNota.data<<endl;

	double total = 0;
	cout<<"===== ITENS ====="<<endl;
	for (int i=0;i<QTD_ITENS;i++) {
		double total_item = 0;
		cout<<"\t Numero: "<<pNota.itens[i].numero<<endl;
		cout<<"\t Descricao: "<<pNota.itens[i].produto<<endl;
		cout<<"\t Quantidade: "<<pNota.itens[i].qtd<<endl;
		cout<<"\t Valor unitario: "<<pNota.itens[i].valor_unitario<<endl;

		total_item = pNota.itens[i].valor_unitario*pNota.itens[i].qtd;
		cout<<"\t Total item: "<<total_item<<endl;

		total = total + total_item;
	}

	cout<<"TOTAL: "<<total<<endl;

}

// para salvar no arquivo
void salvarNota(string pConteudo) {
	ofstream arquivo;

	arquivo.open("arquivos/notas.txt", ios::app);

	arquivo << pConteudo << endl;

	arquivo.close();
}

void salvarItem(string pConteudo) {
	ofstream arquivo;

	arquivo.open("arquivos/itens.txt", ios::app);

	arquivo << pConteudo << endl;

	arquivo.close();
}

int main() {
	Nota nota;

	cout<<"Informe o numero da nota"<<endl;
	cin>>nota.numero;

	cout<<"Informe a empresa"<<endl;
	cin>>nota.empresa;

	cout<<"Informe a data de emissao"<<endl;
	cin>>nota.data;

    string linhaNota = "nota numero: " + to_string(nota.numero) + " ; " + "nota empresa: " + nota.empresa + " ; " + "data nota: " + nota.data + " ; ";

    salvarNota(linhaNota);

	for (int i=0;i<QTD_ITENS;i++) {
		nota.itens[i].numero = i+1;

		cout<<"Informe a descricao do produto"<<endl;
		cin>>nota.itens[i].produto;

		cout<<"Informe a quantidade do item"<<endl;
		cin>>nota.itens[i].qtd;

		cout<<"Informe o valor unitario do item"<<endl;
		cin>>nota.itens[i].valor_unitario;

        string linhaItem = "item produto: " + nota.itens[i].produto + " ; " + "quant item: " + to_string(nota.itens[i].qtd) + " ; " + "valor unitario item: " + to_string(nota.itens[i].valor_unitario) + " ; ";

        salvarItem(linhaItem);
	}

	// Chama o modulo de exibicao dos dados da nota na tela
	getNota(nota);

}
