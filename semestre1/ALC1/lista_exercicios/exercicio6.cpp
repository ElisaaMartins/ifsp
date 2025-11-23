// Exercício 6: Desenhando Formas com Asteriscos

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // --- QUADRADO ---
    /*for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == 0 || i == 7 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    // --- CÍRCULO ---
    int raio = 5;
    for (int i = -raio; i <= raio; i++) {
        for (int j = -raio; j <= raio; j++) {
            if (abs(i * i + j * j - raio * raio) < raio)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    // --- CRUZ ---
    for (int i = 0; i < 5; i++) {
        if (i == 2) cout << "*****" << endl;
        else if (i == 1 || i == 3) cout << " *** " << endl;
        else cout << "  *  " << endl;
    }

    //cout << endl;

    // --- LINHA VERTICAL ---
    for (int i = 0; i < 8; i++) {
        cout << "   *" << endl;
    }

    cout << endl;

    // --- LOSANGO ---
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "*";
        cout << endl;
    }

    return 0;*/
    
    
    cout << "*****\n";
    cout << "*   *\n";
    cout << "*   *\n";
    cout << "*   *\n";
    cout << "*   *\n";
    cout << "*****\n\n"; 

    
    cout << "  ***  \n";
    cout << " *   * \n";
    cout << " *   * \n";
    cout << "  ***  \n\n";

    
    cout << "  *  \n";
    cout << " *** \n";
    cout << "*****\n";
    cout << "  *  \n";
    cout << "  *  \n";
    cout << "  *  \n";
    cout << "  *  \n";
    cout << "  *  \n";
	cout << "  *  \n\n";

    
    cout << "   *   \n";
    cout << "  * *  \n";
    cout << " *   * \n";
    cout << "  * *  \n";
    cout << "   *   \n";

    return 0;
    
}


