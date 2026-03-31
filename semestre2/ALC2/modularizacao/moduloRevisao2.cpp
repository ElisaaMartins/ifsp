#include <iostream>

using namespace std;

/*void idade_dias (double pAno, double pMes, double pDia){
    double idade =  (pAno * 365) + (pMes * 30) + pDia;

    cout << "Sua idade em dias e: " << idade;
}*/

int getDias (int pAnos, int pMeses, int pDias) {
    pDias  += pMeses * 30 + pAnos * 365;

    return pDias;
}

void exibeDias (int pDias){
    system("cls");

    cout << "Quantidade em dias: " << pDias << endl;
}


int main () {
	int anos, meses, dias;

	cout << "Digite sua idade em anos, meses e dias: ";
	cin >> anos >> meses >> dias;

	//idade_dias(ano, mes, dia);


	exibeDias(dias = getDias(anos, meses, dias));
}
