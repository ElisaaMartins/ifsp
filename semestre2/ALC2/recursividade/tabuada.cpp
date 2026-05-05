#include <iostream>

using namespace std;

// 1 - qual a condicao de parada? 10/0
// 2 - o que o modulo recursivo retorna? nada (void)

void tabuada_recursivo(int x, int y){
    if (y <= 10) { // se o multiplicador (y) for até 10 -- condicao de parada
        cout << x << " X " << y << " = " << x*y << endl; // vai imprimir dessa maneira
        tabuada_recursivo(x, y+1); // aqui chama a propria funcao e adiciona +1 no multiplicador pra ir pro proximo

        // cout << x << " X " << y << " = " << x*y << endl;
        // aqui monta depois da logica, por isso fica ao contrario

    }

}

int main (){
    int num, mult;

    cout << "Digite um numero: ";
    cin >> num;

    cout << "Digite o multiplicador: ";
    cin >> mult;

    tabuada_recursivo(num, mult);
}
