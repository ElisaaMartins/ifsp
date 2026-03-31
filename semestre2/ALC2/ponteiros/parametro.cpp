#include <iostream>

using namespace std;

// não usa ponteiros, passsagem de parametros exclusivamente por valor
double getMediaPadrao(int pN1, int pN2){
    return (pN1 + pN2) / 2;
}

// usa-se ponteiros, um dos parametros é passado por referencia
void getMediaPonteiro(double *pM, double pN1, double pN2){
    *pM = (pN1 + pN2) / 2;
} // pode reutilizar, caso queira fazer alterações


int main(){

    //double media = getMediaPadra0 (7, 10);
    //cout << media << endl;

    double media;
    getMediaPonteiro(&media, 7, 10);

    //media += 1;


    cout << media << endl;
}
