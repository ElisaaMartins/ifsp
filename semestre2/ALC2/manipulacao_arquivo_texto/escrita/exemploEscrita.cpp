#include <iostream>
#include <fstream>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    string curso;
};

int main(){
    Aluno aluno;
    // 1 - criar uma variavel para esrita em arquivo
    ofstream arquivo;

    // 2 - abrir arquivo para escrita
    // ios::out --> apaga se houver registros
    // ios::app --> preserva os arquivos que já estavam armazenados no arquivo
    arquivo.open("arquivos/registro.txt", ios::app);

    aluno.nome = "Claudio";
    aluno.idade = 30;
    aluno.curso = "ADS";


    // 3 - efetua a escretia do(s) registro(s) no arquivo de texto

    /*arquivo << "IFS" << endl;
    arquivo << "Aula de algoritmos 2";*/

    arquivo << aluno.nome << " ;" << aluno.idade << " ;" << aluno.curso;

    // 4 - fechar arquivo para aescrita
    arquivo.close();
}
