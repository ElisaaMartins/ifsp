// Programa para exibir uma sequência numérica
#include <iostream>
using namespace std;

int main(){
    int i, n;
    cout << "Digite o número final: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << i << " ";
    }

    return 0;
}
