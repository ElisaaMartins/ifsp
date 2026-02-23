// baskara com modulos
#include <iostream>
#include <cmath>

using namespace std;

double getDelta (double pa, double pb, double pc){
    return (pow(pb, 2) - 4 * pa * pc);
}

double getBaskara(double pa, double pb, double pc, bool positivo) {
    if (positivo == true) {
        return (-pb + sqrt(getDelta(pa, pb, pc)) / 2 * pa);
    }
    else {
        return (-pb - sqrt(getDelta(pa, pb, pc)) / 2 * pa);
    }
}


int main () {
    double a = -3, b = 5, c = 9, x1, x2;

    x1 = getBaskara(a, b, c, true);
    cout << "O x1 de Baskara eh: " << x1 << endl;

    x2 = getBaskara(a, b, c, false);
    cout << "O x2 de Baskara eh: " << x2 << endl;

    return 0;
}
