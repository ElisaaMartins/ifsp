#include <iostream>

using namespace std;

// PONTEIROS COM FUNCOES
void somar(float *var, float valor){
    *var += valor;
}

void iniVetor(float *v){
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    v[4] = 0;

}

int main() {
    string veiculo = "carro";
    string *pv; // crianco ponteiro

    pv = &veiculo; // ponteiro recebe o endereco da variavel veiculo

    cout << veiculo << endl;
    cout << pv << endl; // mesmo que &veiculo


    // modificando valores
    *pv = "moto"; // no endereco apontado por *pv adicione o valor "moto" - vai adicionar la em veiculo

    cout << veiculo << endl; // mesmo que *pv


    // PONTEIROS COM ARRAYS
    int *p;
    int vetor[10];

    // posicao 0
    p = &vetor[0];// p = vetor;
    cout << p << endl;

    // posicao 1
    *(p+=1);
    // p = &vetor[1];
    cout << p << endl; // vai de 4 em 4 bits

    // posicao 2
    // atribuicao de valores
    p = &vetor[2];
    *p = 10;
    cout << vetor[2] << endl;

    // posicao 3
    p = &vetor[3];
    *p = 20;
    cout << vetor[3] << endl;

    // PONTEIROS COM FUNCOES
    float num = 0;
    float vetor2[5];

    somar(&num, 15);
    cout << num << endl; // 15

    iniVetor(vetor2);

    for(int i = 0; i < 5; i++){
        cout << vetor2[i] << endl;
    }



    // OPERADOR NEW - ALOCACAO DINAMICA
    int *p2 = new int; // Reserva espaço para 1 inteiro e guarda o endereço em p2
    *p2 = 10;          // Coloca o valor 10 naquele espaço reservado


    // OPERADOR DELETE - LIBERACAO DE MEMORIA
    delete p;       // Libera um unico objeto
    delete[] v;     // Libera um vetor inteiro (importante usar os colchetes)

    // OPERADOR TYPEDEF
    // serve para criar "apelidos"
    typedef int* ptr_inteiro; // Agora "ptr_inteiro" significa "int*"

    int main() {
        ptr_inteiro p; // Isso é exatamente o mesmo que: int *p;
        p = new int;
        *p = 50;
        delete p;
    }


}

