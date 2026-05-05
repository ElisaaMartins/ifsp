 #include <iostream>

 using namespace std;

 const int QTD_CARRO = 3;

 struct Carro {
 	int ano;
 	string modelo;
 	double velocidade;
 	bool importado;
 };

 void ordena(Carro c[]){
    bool troca;
    do{
        troca = false;
        for(int i = 0; i < QTD_CARRO - 1; i++){
            // compara valores vizinhos
            if(c[i].ano > c[i+1].ano){
                Carro aux = c[i];
                c[i] = c[i+1];
                c[i+1] = aux;
                troca = true;
            }
        }
    } while (troca);

}


 int main() {

 	Carro car[QTD_CARRO];

	int import;
 	for (int i=0;i<QTD_CARRO;i++) {
 		cout<<"Carro numero "<<(i+1)<<endl;

 		cout<<"Informe o ano do carro"<<endl;
 		cin>>car[i].ano;

 		cout<<"Informe o modelo do carro"<<endl;
 		cin>>car[i].modelo;

 		cout<<"Informe a velocidade maxima do carro"<<endl;
 		cin>>car[i].velocidade;

 		cout<<"Carro importado ? (0/1)"<<endl;
 		cin>>import;

 		car[i].importado = ((import == 1) ? true : false);
	 }



    system("cls");

    ordena(car);

    cout << "CARROS ORDENADOS - por ano de fabricacao" << endl;
 	for (int i=0; i<QTD_CARRO;i++) {
 		cout<<"Ano: "<<car[i].ano<<endl;
 		cout<<"Modelo: "<<car[i].modelo<<endl;
 		cout<<"Velocidade: "<<car[i].velocidade<<endl;
 		cout<<"Importado: "<<((car[i].importado == true) ? "Sim" : "Nao")<<endl;
        cout << endl;

 	}
 }
