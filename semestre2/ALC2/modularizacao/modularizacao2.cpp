#include <iostream>

using namespace std;

// modulo auxiliar de soma de valores
// nao tem retorno - so exibe na tela
int soma (int v1, int v2) {
	int total = v1 + v2;

	//cout << "soma: " << t << endl;
}

// subtracao
int sub (int v1, int v2) {
	int total = v1 - v2;

	return total;
}

// multiplicacao
int mult (int v1, int v2) {
	int total = v1 * v2;

	return total;
}

// divisao
double divisao (double v1, double v2) {
	double total = v1 / v2;

	return total;
}

int potencia (int v1){
    int total = mult(v1, v1);

    return total;
}

int main () {
	double t;
	double n1 = 3, n2 = 2;

	// t = soma(2, 3);
    t = soma(n1, n2); // como nao tem retorno so chama o modulo
    cout << "soma: " << t << endl;

	t = sub(n1, n2);
	cout << "subtracao: " << t << endl;

    t = mult(n1, n2);
	cout << "multiplicacao: " << t << endl;
	// cout << mult(n2, n1) << endl;

    t = divisao(n1, n2);
	cout << "divisao: " << t << endl;

	t = potencia(n2);
	cout << "potencia: " << t << endl;


	return 0;

}
