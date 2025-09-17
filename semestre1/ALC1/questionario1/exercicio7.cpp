#include <iostream>

using namespace std;

int main (){
    int a, b, r1, r2, r3, r4;

    cout << "Digite um numero: ";
    cin >> a;

    cout << "Digite outro numero: ";
    cin >> b;

    r1 = b - a;
    r2 = a * b;
    r3 = a / b;
    r4 = r1 + r3;

    cout << r1 << "\n"
         << r2 << "\n"
         << r3 << "\n"
         << r4 << "\n";

    return 0;
}
