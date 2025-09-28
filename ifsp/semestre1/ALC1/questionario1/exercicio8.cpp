#include <iostream>

using namespace std;

int main(){
    int a,b;

    cout << "Digite um numero: ";
    cin >> a;

    cout << "Digite outro numero: ";
    cin >> b;

    if (a == 2)
    {
        if (b == 2)
        {
            a = a + b;
        }
    }
    else
    {
        a = a - b;
    }

    cout << "a = " << a;

    return 0;
}
