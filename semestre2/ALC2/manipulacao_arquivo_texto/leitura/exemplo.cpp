#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
int main() {

    ifstream arquivo("arquivos/exemplo.txt");
    string linha, parte;
    char delimitador = ';'; // exemplo: ponto e vírgula - o que separa

    if(arquivo.is_open()) {
        // "explode" a linha baseada no delimitador
        while (getline(arquivo, linha)){
            stringstream registro(linha);
            vector<string>campos;
        while(getline(registro, parte, delimitador)){
            campos.push_back(parte);
        }

        // Exibe as partes explodidas

        /*for(string c : campos){
            cout << "[" << c << "] " ;
        }*/

        for (int i = 0; i < campos.size(); i++){
            cout << "[" << campos[i] << "] " ;
        }

        cout << endl;
    }

    arquivo.close();

    }
}

