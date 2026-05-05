#include <iostream>

using namespace std;

// 1 - qual a condicao de parada? 10
// 2 - o que o modulo recursivo retorna? nada

/* razao = 2
   inicio = 2
   limite =  10
*/

void PA_recursivo (int ini, int fim, int razao){
    if (ini <= fim){
        cout << ini << " ";
        PA_recursivo(ini+razao, fim, razao);
    }
}

void PG_recursivo (int ini, int fim, int razao){
    if (ini <= fim){
        cout << ini << " ";
        PG_recursivo(ini*razao, fim, razao);
    }
}


int main (){
    /*int razao = 2;
    for (int i = 2; i < 10; i+=2){
        cout << i << endl;
    }*/

    cout << "PA recursivo: ";
    PA_recursivo(2, 10, 2);

    cout << endl;

    cout << "\nPG recursivo: ";
    PG_recursivo(2, 100, 2);

}
