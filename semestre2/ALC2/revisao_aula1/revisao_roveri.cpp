/* 1. Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, 
P(x1,y1) e P(x2,y2), escreva a distância entre eles */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int x1, y1, x2, y2;
	double distancia; //, pontos;
	
	cout << "Digite o valor de x1:";
	cin >> x1;
	
	cout << "Digite o valor de y1:";
	cin >> y1;
	
	cout << "Digite o valor de x2:";
	cin >> x2;
	
	cout << "Digite o valor de y2:";
	cin >> y2;
	
	cout << endl;
	cout << "Os pontos sao P(" << x1 << ", " << y1 << ")";
	cout << " e P(" << x2 << ", " << y2 << ")" << endl;
	
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	//pontos = ((x2 - x1) * (x2 - x1)) + ((y2-y1) * (y2-y1));
	//distancia = sqrt(pontos);
		
	cout << endl;
	cout << "A distancias entre os pontos e " << distancia;
}

