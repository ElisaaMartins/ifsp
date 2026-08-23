#include <iostream>

using namespace std;

int retornaSoma(int n){
    // se n < que 10 retorna ele mesmo
    if (n < 10){
        return n;
    }

    // o %10 faz pegar o ultimo numero e ai o /10 reduz um numero
    return (n%10) + retornaSoma(n/10);

}

int main() {
	int n;

	cout << "Insira um numero com ate 5 digitos: ";
	cin >> n;

    cout << "A soma dos digitos e igual " << retornaSoma(n) << endl;

}
