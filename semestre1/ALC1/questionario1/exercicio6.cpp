#include <iostream>

using namespace std;

int main(){
    int a = 4;
    int b = 1;
    int c{0};
    int d{0};

    a = b + 3;
    b++;
    c = (b + 4) * 2;
    c += 2;
    d = a + b - 3;
    a++;
    a += 2 - b;
    b *= 2;

    cout << a << "\n"
         << b << "\n"
         << c << "\n"
         << d << "\n";

    return 0;
}
