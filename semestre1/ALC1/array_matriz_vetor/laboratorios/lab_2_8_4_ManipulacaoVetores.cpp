// 2.8.4 LABORATÓRIO: Manipulações simples de vetores 
#include <iostream>

using namespace std;

int main(void) {
    int vetor1[] = {4, 7, 2, 8, 1, 3, 0, 3, 11};
    int tamVetor = sizeof(vetor1) / sizeof(vetor1[0]);
    int vetor2[tamVetor];

    for (int i = 0; i < tamVetor; i++){
        if (i == 0){
            vetor2[0] = vetor1[tamVetor - 1];
        }
        else{
            vetor2[i] = vetor1[i - 1];
        }

    }

    for(int i = 0; i < tamVetor; i++) {
        cout << vetor2[i] << ' ';
    }

    cout << endl;

}
