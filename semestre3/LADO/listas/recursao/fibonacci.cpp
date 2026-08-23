#include <iostream>

using namespace std;

// aqui n esta representando a posição, começando de 0
int fibonacci_recursivo(int n) { // pega o elemento da sequencia de fibonacci
    if (n == 0) {
        return 0; // se fib(0) = 0
    }

    if (n == 1) {
        return 1; // se fib(1) = 1
    }

    // Pra descobrir o número n, soma os dois anteriores
    return fibonacci_recursivo(n-1) + fibonacci_recursivo(n-2);
}


int main() {
    int fib;

    cout << "Insira a posicao de Fibonacci que deseja saber o valor: ";
	cin >> fib;

    cout << "O valor da " << fib << " posicao de Fibonacci e " << fibonacci_recursivo(fib) << endl;
}
