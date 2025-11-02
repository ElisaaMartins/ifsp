//Exercício 12: Calculadora de Custo Diário de Condução

#include <iostream>

using namespace std;

int main() {

	double kmDia, litrosCombustivel, kmLitro, estacionamento, pedagio;
	
	cout << "Total de quilometros dirigidos por dia: " << endl;
	cin >> kmDia;
	
	cout << "Custo por litro de combustivel: " << endl;
	cin >> litrosCombustivel;
	
	cout << "Media de quilometros por litro (autonomia do veiculo): " << endl;
	cin >> kmLitro;
	
	cout << "Taxas de estacionamento por dia: " << endl;
	cin >> estacionamento;
	
	cout << "Pedagios por dia: " << endl;
	cin >> pedagio;
	
	double custoDiario, custoCombustivel;
	custoCombustivel = (kmDia / kmLitro) * litrosCombustivel;
	custoDiario = custoCombustivel + estacionamento + pedagio;
	
	cout << "Custo diario de conducao: R$ " << custoDiario << endl;



}

