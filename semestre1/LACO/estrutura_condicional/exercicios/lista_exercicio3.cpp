#include <iostream>

using namespace std;

int main (){
	double preco, dinheiro, cheque, credito, pix;
	string formaPagamento;
	
	cout << "Informe o preco do produto" << endl;
	cin >> preco;
	
		
	cout << "Informe a forma de pagamento" << endl;
	cout << "dinheiro || cheque || credito || pix" << endl;
	cin >> formaPagamento;

	
	if(formaPagamento == "dinheiro" || formaPagamento == "cheque") {
		preco = preco - (preco * 0.10);
		cout << "com 10% de desconto o preco sai " << preco << endl;
	} else if (formaPagamento == "credito") {
		preco = preco - (preco * 0.15);
		cout << "com 15% de desconto o preco sai " << preco << endl;
	} else if (formaPagamento == "pix") {
		preco = preco - (preco * 0.05);
		cout << "com 5% de desconto o preco sai " << preco << endl;
	} else {
		cout << "digite uma forma de pagamento valida: dinheiro, cheque, credito, pix " << endl;
	}
}
