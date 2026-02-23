#include <iostream>

using namespace std;

// modulo auxiliar de soma de valores
/*int soma (int v1, int v2) {
	int total = v1 + v2;

	return total;
}*/


void soma(int v1, int v2) {
	int total = v1 + v2;
	
	//cout<<total<<endl;
	cout << "soma: " << total << endl;	
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
int divisao (int v1, int v2) {
	int total = v1 / v2;

	return total;
}

int main () {
	double n1 = 3, n2 = 2, t;

	soma(n2, n1);
	
	/*t = soma(2, 3);
	cout << "soma: " << t << endl;*/

	t = sub(2, 3);
	cout << "subtracao: " << t << endl;

    t = mult(2, 3);
	cout << "multiplicacao: " << t << endl;

    t = divisao(2, 3);
	cout << "divisao: " << t << endl;

	return 0;

}
