#include <iostream>
#include <cmath>

using namespace std;

double imc_calculo (double peso, double altura){
	return  peso / pow(altura, 2);
}

string classificacao (double imc){
	if (imc < 18.5){
		return "Abaixo do peso";
	} 
	else if (imc > 18.5 && imc < 25){
		return "Peso normal";
	}
	else if (imc > 25 && imc < 30){
		return "Sobrepeso";
	}
	else if (imc > 30 && imc < 35){
		return "Obesidade I";
	}
	else if (imc > 35 && imc < 40){
		return "Obesidade II";
	}
	else{
		return "Obesidade III";
	}	
}


int main (){
	
	double imc, altura, peso;
	
	cout << "digite o seu peso: ";
	cin >> peso;
	
	cout << "digite sua altua: ";
	cin >> altura;

	cout << endl;
	
	// imc = peso / pow(altura, 2);
	imc = imc_calculo(peso,altura);
	cout << "Seu imc eh " << imc << endl;
	
	cout << "A classificacao do seu imc eh " << classificacao(imc) << endl;
	
	
}
