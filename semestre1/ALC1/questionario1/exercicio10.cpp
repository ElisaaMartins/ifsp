#include <iostream>

using namespace std;

int main(void) {
    int fim, a, b;
    int i = 5;
    int c = 0;

    cout << "Digite os valores para fim, a e b: ";
    cin >> fim >> a >> b;

    do {
        a -= i;
        if (a + b > 0) {
            b++;
        }
        i--;
    } while (i >= fim);

    c = b - a;

    cout << "c = " << c << "\n";

    return 0;
}
