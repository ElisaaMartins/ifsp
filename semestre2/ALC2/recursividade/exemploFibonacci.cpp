#include <iostream>

using namespace std;

int fibonacci_recursivo(int n) { // pega o elemento da sequencia de fibonacci (nao conta o 0)
    // Pra descobrir o número n, soma os dois anteriores
    if ((n == 1) || (n == 2)) { // aqui diz que ambos tem que ser 1
        return 1;
    }
        return fibonacci_recursivo(n-1) + fibonacci_recursivo(n-2);
        // fibonacci(6) = fibonacci(5) + fibonacci(4)
}

int fibonacci_iterativo(int n){
    int sequencia[n];
    sequencia[0] = 1;
    sequencia[1] = 1;

    for (int i = 2; i < n; i++){
        sequencia[i] = sequencia[i-1] + sequencia[i-2];
    }
    return sequencia[n-1];
}


int main() {
    cout << "Fibonacci recursivo: " << fibonacci_recursivo(6) << endl;
    cout << "Fibonacci iterativo: " << fibonacci_iterativo(6) << endl;
    return 0;
}
