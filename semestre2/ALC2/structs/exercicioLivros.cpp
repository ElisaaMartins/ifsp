#include <iostream>

using namespace std;

int const QTD_LIVROS = 4;

struct Livro {
	int codigo;
	string nome;
	double valor;
};

void printLivro (Livro l){ // IMPRIMIR
    cout << "\tCodigo " << l.codigo << endl;
    cout << "\tNome " << l.nome << endl;
    cout << "\tValor " << l.valor << endl;
    cout << "\t---------" << endl;
}

void getLivros(Livro l[QTD_LIVROS ]) { // 1.LISTAR
    cout << "\t=== LISTA ===" << endl;

    for (int i = 0; i < QTD_LIVROS; i++){
        printLivro(l[i]);
    }

    cout << endl;
}

void setPreco(Livro l[QTD_LIVROS]){ // 2.REAJUSTAR VALOR
    int codBusca;
    bool livroEnc = false;
    cout << "\t=== REAJUSTAR VALOR ===" << endl;

    cout << "\tCodigo do livro: ";
    cin >> codBusca;

    for (int i = 0; i < QTD_LIVROS; i++){
        if (l[i].codigo == codBusca){
            cout << "\tLivro " << l[i].nome << endl;
            cout << "\tValor " << l[i].valor << endl;
            cout << "\t-------------------" << endl;

            cout << "\tDigite o novo valor do livro: ";
            cin >> l[i].valor;

            livroEnc = true;
        }
    }

    //system("cls");
    cout << endl;

    if (livroEnc == false) {
        cout << "\tLIVRO NAO ENCONTRADO" << endl;
    }

    cout << "\t=== LISTA ===" << endl;
    for (int i = 0; i < QTD_LIVROS; i++){
        printLivro(l[i]);
    }
    cout << endl;
}

void getLivro(Livro l[QTD_LIVROS]) { // 3.PESQUISA PELO CODIGO
    int codBusca;
    bool livroEnc = false;
    cout << "\t=== PESQUISA LIVRO PELO CODIGO ===" << endl;

    cout << "\tCodigo do livro: ";
    cin >> codBusca;

    cout << endl;

    for (int i = 0; i < QTD_LIVROS; i++){
        if (l[i].codigo == codBusca){
            cout << "\t=== LIVRO ===" << endl;
            printLivro(l[i]);
            livroEnc = true;
        }
    }
        if (livroEnc == false) {
            cout << "\tLIVRO NAO ENCONTRADO" << endl;
        }

        cout << endl;

}

int main() {
	Livro livros[QTD_LIVROS] = {{1, "Mundo de Sofia", 30.5}, {2, "Codigo Vinci", 100.3}, {3, "Pequeno Principe", 25}, {4, "Dom Casmurro", 150}};

	string continuar = "S";

	while (continuar == "S") {
	    system("cls");
		int opcao;
		cout << "Informe a opcao:" << endl;
		cout << "1 - Listar" << endl;
		cout << "2 - Reajustar preco do livro" << endl;
		cout << "3 - Buscar livro pelo codigo" << endl;
		cout << endl;
		cin >> opcao;


		switch (opcao) {
			case 1: getLivros(livros);
		        	break;
			case 2: setPreco(livros);
					break;
			case 3: getLivro(livros);
					break;
			default: cout << "Opcao incorreta" << endl;
<<<<<<< HEAD
                    break;
=======
					 break;
>>>>>>> 6ffb01cda10d0af96e9f2ed1e032f1bf23ad794a
		}

		cout << endl;
		cout << "Deseja continuar ? (S/N) ";
		cin >> continuar;
	}
}
