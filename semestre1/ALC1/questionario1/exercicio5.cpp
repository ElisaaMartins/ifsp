#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    a = 2;
    b = 8;
    c = 1;
    c = b - b;
    c = a + a;
    c = b * 8;
    b = b + b;
    c = a * c;
    b = a - c;
    c = b + a;

    cout << a << "\n"
         << b << "\n"
         << c << "\n";

    return 0;
}
