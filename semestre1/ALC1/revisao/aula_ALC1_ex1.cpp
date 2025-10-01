#include <iostream>

using namespace std;

int main(){
    int i, n , soma = 0;

    cout << “Digite o número final: ”;
    cin >> n;

    for (i = 1; i <= n; i++) {
        soma += i; // soma = soma + i
    }

    cout << “Somatório = ” << soma << endl;

    return 0;
}
