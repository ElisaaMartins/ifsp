#include <iostream>
#include <string>

using namespace std;

int const QTD_LIVROS = 4;
int const QTD_GENEROS = 4;

struct Genero{
    int id;
    string categoria;
};

struct Livro{
    int idLivro;
    string titulo;
    string autor;
    int anoPublicacao;
    Genero genero;
};

// Cadastrar genero
void cadGen(Genero g[], int &qtd_generos){
    // se o limite for atingido
    if (qtd_generos >= QTD_GENEROS) {
    cout << "Limite de generos permitidos ja atingido" << endl;
    return;
}

    cout << "\t=== CADASTRAR GENERO === " << endl;

    cout << "Digite o id do genero: ";
    cin >> g[qtd_generos].id;
    cin.ignore();

    cout << "Digite o genero do livro: ";
    getline(cin, g[qtd_generos].categoria);

    qtd_generos++;

    cout << "Genero cadastrado" << endl;
}


// Cadastrar livros
void cadLivro(Livro l[], int &qtd_livros, Genero g[], int qtd_generos){
    if (qtd_generos == 0) {
        cout << "\tATENCAO = Cadastre um genero antes de cadastrar o livro" << endl;
        return;
    }

    if (qtd_livros >= QTD_LIVROS) {
    cout << "Limite de livros atingido!" << endl;
    return;
}

    cout << "\t=== CADASTRAR LIVRO === " << endl;

    cout << "ID: ";
    cin >> l[qtd_livros].idLivro;
    cin.ignore();

    cout << "Titulo: ";
    getline(cin, l[qtd_livros].titulo);

    cout << "Autor: ";
    getline(cin, l[qtd_livros].autor);

    cout << "Ano Publicacao: ";
    cin >> l[qtd_livros].anoPublicacao;

    // exibir os generos disponiveis prp usuario escolher
    cout << "\t=== GENEROS DISPONIVEIS === " << endl;
    for (int i = 0; i < qtd_generos; i++){
        cout << "\t[" << g[i].id << " - " << g[i].categoria << "]" << endl;
    }

    // buscar o genero pra vincular o livro
    int codBusca;
    bool generoEnc = false;

    while (!generoEnc) {
        cout << "ID do genero: ";
        cin >> codBusca;

        for (int i = 0; i < qtd_generos; i++){
            if(g[i].id == codBusca){
                l[qtd_livros].genero = g[i];
                generoEnc = true;
                break;
            }
        }
        if (!generoEnc){
            cout << "Esse genero nao existe ainda" << endl;
        }
    }

    qtd_livros++;
    cout << "Livro cadastrado com sucesso" << endl;
}

// listar acervo
void listaAcervo(Livro l[], int qtd_livros){
    if (qtd_livros == 0){
        cout << "Sem livros cadastrados ainda" << endl;
        return;
    }

    cout << "\t=== ACERVO DE LIVROS === " << endl;


    for (int i = 0; i < qtd_livros; i++){
        cout << "LIVRO " << i + 1 << endl;

        cout << "Codigo: "         << l[i].idLivro << endl;
        cout << "Nome: "           << l[i].titulo << endl;
        cout << "Autor: "          << l[i].autor << endl;
        cout << "Ano Publicacao: " << l[i].anoPublicacao << endl;
        cout << "Genero: "         << l[i].genero.categoria
             << " (" << l[i].genero.id << ")"<< endl;
        cout << "-----------------" << endl;
    }
}

// consultar por genero
void consultGen(Livro l[], int qtd_livros){
    if (qtd_livros == 0){
        cout << "Sem livros cadastrados ainda" << endl;
        return;
    }

    int codBusca;
    bool generoEnc = false;

    cout << "\t=== PESQUISA LIVRO PELO GENERO ===" << endl;
    cout << "Codigo do genero: ";
    cin >> codBusca;

    for (int i = 0; i < qtd_livros; i++){
        if (l[i].genero.id == codBusca){
            cout << "\t=== LIVRO ===" << endl;
            cout << "Codigo: "         << l[i].idLivro << endl;
            cout << "Nome: "           << l[i].titulo << endl;
            cout << "Autor: "          << l[i].autor << endl;
            cout << "Ano Publicacao: " << l[i].anoPublicacao << endl;
            cout << "Genero: "         << l[i].genero.categoria << endl;
            generoEnc = true;
        }
    }
        if (generoEnc == false) {
            cout << "Livro nao encontrado" << endl;
        }
}

// consultar por autor
void consultAutor(Livro l[], int qtd_livros){
    if (qtd_livros == 0){
        cout << "Sem livros cadastrados ainda" << endl;
        return;
    }

    string autorBusca;
    bool livroEnc = false;
    cout << "\t=== PESQUISA LIVRO PELO AUTOR ===" << endl;

    cout << "Autor do livro: ";
    cin.ignore();
    getline(cin, autorBusca);

    for (int i = 0; i < qtd_livros; i++){
        //if (l[i].autor == autorBusca){
        if (l[i].autor.find(autorBusca) != string::npos) { // para buscar parte do nome
            cout << "Codigo: "         << l[i].idLivro << endl;
            cout << "Nome: "           << l[i].titulo << endl;
            cout << "Autor: "          << l[i].autor << endl;
            cout << "Ano Publicacao: " << l[i].anoPublicacao << endl;
            cout << "Genero: "         << l[i].genero.categoria << endl;
            livroEnc = true;
        }
    }
        if (livroEnc == false) {
            cout << "Livro nao encontrado" << endl;
        }

        cout << endl;
}

int main (){

	Livro livros[QTD_LIVROS];
	Genero generos[QTD_GENEROS];

	int qtd_livros = 0;
	int qtd_generos = 0;

	string continuar = "S";
	while (continuar == "S" || continuar == "s") {
	    system("cls");
		int menu;
		cout << "MENU" << endl;
		cout << "1 - Cadastrar genero" <<endl;
		cout << "2 - Cadastrar livro" << endl;
		cout << "3 - Listar acervo" << endl;
		cout << "4 - Consultar por genero" << endl;
		cout << "5 - Consultar por autor" << endl;
		cin>>menu;

		switch (menu) {
			case 1:
                cadGen(generos, qtd_generos);
                break;
			case 2:
			    cadLivro(livros, qtd_livros, generos, qtd_generos);
                break;
			case 3:
			    listaAcervo(livros, qtd_livros);
                break;
            case 4:
			    consultGen(livros, qtd_livros);
                break;
            case 5:
			    consultAutor(livros, qtd_livros);
                break;
			default:
			    cout<<"Opcao incorreta"<<endl;
                break;
		}

		cout << endl;
		cout << "Deseja continuar ? (S/N)";
		cin >> continuar;
	}

}
