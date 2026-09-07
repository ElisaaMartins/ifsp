/* Considere um cadastro de produtos de um estoque, com as seguintes informações para cada produto:
    • Código de identificação do produto: representado por um valor inteiro
    • Nome do produto: com até 50 caracteres
    • Quantidade disponível no estoque: representado por um número inteiro
    • Preço de venda: representado por um valor real

    (a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para guardar as informações de um produto
    (b) Crie um conjunto de N produtos (N é um valor fornecido pelo usuário) e peça ao usuário para entrar com as informações de cada produto
    (c) Encontre o produto com o maior preço de venda
    (d) Encontre o produto com a maior quantidade disponível no estoque
*/

#include <iostream>

using namespace std;

// item (a)
struct Produto{
    int id;
    char nome[50];
    int qtd;
    double preco;
};

int main(){
    // item (b)
    int qtd_produtos;

    cout << "Quantos produtos quer registrar? ";
    cin >> qtd_produtos;

    Produto* estoque = new Produto[qtd_produtos];

    for (int i = 0; i < qtd_produtos; i++){
        cout << "ID: ";
        cin >> estoque[i].id;

        cout << "Nome: ";
        cin.ignore();
        cin.getline(estoque[i].nome, 50);

        cout << "Quantidade: ";
        cin >> estoque[i].qtd;

        cout << "Preco: ";
        cin >> estoque[i].preco;
    }

    // item (c) e (d)
    int maiorPreco = 0;
    int maiorQtd = 0;

    for(int i = 0; i < qtd_produtos; i++){
        // (c)
        if(estoque[i].preco > estoque[maiorPreco].preco){
            maiorPreco = i;
        }

        // (d)
        if(estoque[i].qtd > estoque[maiorQtd].qtd){
            maiorQtd = i;
        }
    }

    if(qtd_produtos > 0){
        cout << "Maior preco: " << estoque[maiorPreco].nome << " R$ " << estoque[maiorPreco].preco << endl;
        cout << "Maior quantidade: " << estoque[maiorPreco].nome << " R$ " << estoque[maiorPreco].qtd << endl;
    }

    delete[] estoque;
}
