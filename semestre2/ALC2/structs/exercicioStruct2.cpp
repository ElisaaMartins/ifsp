#include <iostream>

using namespace std;

int const QTD_FUNC = 3;

struct Funcionario{
    string nome;
    double salario;
    int anosEmpresa;
};

void getFuncionario(Funcionario func[QTD_FUNC]) {
    system("cls");

     for (int i = 0; i < QTD_FUNC; i++){
        cout << "FUNCIONARIO " << (i + 1) << endl;
        cout << "\tNome: " << func[i].nome << endl;
        cout << "\tSalario base: " << func[i].salario << endl;
        cout << "\tAnos de empresa: " << func[i].anosEmpresa << endl;

        cout << "\t---------------------" << endl;

        if (func[i].anosEmpresa >= 5 && func[i].anosEmpresa <= 10){
            func[i].salario = func[i].salario + (0.05 * func[i].salario); //5%
            cout << "\tSalario reajustado: " << func[i].salario << endl;
        }
        else if (func[i].anosEmpresa > 10){
            func[i].salario = func[i].salario + (0.1 * func[i].salario);  //10%
            cout << "\tSalario reajustado: " << func[i].salario << endl;
        }
        else {
            func[i].salario = func[i].salario + (0.02 * func[i].salario); //2%
            cout << "\tSalario reajustado: " << func[i].salario << endl;
        }

        cout << endl;
     }
}

int main(){
    Funcionario func[QTD_FUNC];

    for (int i = 0; i < QTD_FUNC; i++){
        cout << "FUNCIONARIO " << (i + 1) << endl;
        cout << "Nome: ";
        cin >> func[i].nome;

        cout << "Salario base: ";
        cin >> func[i].salario;

        cout << "Anos de empresa: ";
        cin >> func[i].anosEmpresa;

        cout << endl;

    }

    getFuncionario(func);
}
