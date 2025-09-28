// Programa para exibir mensagem n vezes
#include <iostream>

using namespace std;

int main(){
    int i, n;

    cout << "Quantas vezes você quer ver a mensagem?";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Olá, mundo!" << endl;
    }

    return 0;
}
