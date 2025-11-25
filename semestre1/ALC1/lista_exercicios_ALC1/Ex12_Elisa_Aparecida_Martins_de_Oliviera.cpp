//Exercício 12: Calculadora de Custo Diário de Condução

#include <iostream>

using namespace std;

int main() {
	
	float total_KM_dia, custo_litro, media_KM_litro, taxa_estacionamento_dia, pedagio_dia, custo_diario;
	
	cout << "Qual foi o total de quilometros dirigidos por dia: ";
	cin >> total_KM_dia;
	
	cout << "Qual foi o custo por litro de combustivel: ";
	cin >> custo_litro;
	
	cout << "Qual foi a media de quilometros por litro (autonomia do veiculo): ";
	cin >> media_KM_litro;
	
	cout << "Qual foi a taxa de estacionamento por dia: ";
	cin >> taxa_estacionamento_dia;

	cout << "Qual foi o valor dos pedagios por dia: ";
	cin >> pedagio_dia;


	custo_diario = ((total_KM_dia * custo_litro) / media_KM_litro) + taxa_estacionamento_dia + pedagio_dia;
	
	cout << "Custo diario de conducao R$ " << custo_diario << endl;


}

