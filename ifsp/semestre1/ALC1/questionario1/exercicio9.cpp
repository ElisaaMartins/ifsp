#include <iostream>

using namespace std;

int main (void){
    int i = 1;
    int fim = 3;
    int a = 5;
    int b = 2;

    while (i <= fim)
    {
        a -= i;
        b = i + a;
        i++;
    }

    cout << "Resultado = " << a + b << endl;

    return 0;
}
