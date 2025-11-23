#include <iostream>

using namespace std;

int main () {
	int x, y = 0;
	
	cout << "Informe um numero: " << endl;
	cin >> x;
	
	while (y < 10) {
		//x++;
		y = x * 2 + 2;
		x++;
	}

	cout << "o valor limite para y eh " << x << endl;

}
