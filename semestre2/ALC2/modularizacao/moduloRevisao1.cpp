// moduarizando revisao 1
#include <iostream>
#include <cmath>
using namespace std;

void getDistancia (double px1, double px2, double py1, double py2){
    double D = sqrt(pow((px2 - px1), 2) + pow((py2 - py1), 2));

    cout << "Distancia: " << D << endl;
}


int main () {

	int x1, x2, y1, y2;
	//double D;

	x1 = 2;
	x2 = 4;
	y1 = 3;
	y2 = 7;

	getDistancia(x1, x2, y1, y2);

}

