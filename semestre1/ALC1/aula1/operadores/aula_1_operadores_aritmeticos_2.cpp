#include <iostream>

using namespace std;

// outro modo de fazer operações
int main(){
    int n1,n2;
    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    n1 += n2;
    cout << "Somando " << n2 << " -> " << n1 << endl;

    n1 -= n2;
    cout << "Subtraindo " << n2 << " -> " << n1 << endl;

    n1 *= n2;
    cout << "Multiplicando por " << n2 << " -> " << n1 << endl;

    n1 /= n2;
    cout << "Dividindo por " << n2 << " -> " << n1 << endl;

    n1 %= n2;
    cout << "Resto da divisao por " << n2 << " -> " << n1 << endl;

    return 0;
}
