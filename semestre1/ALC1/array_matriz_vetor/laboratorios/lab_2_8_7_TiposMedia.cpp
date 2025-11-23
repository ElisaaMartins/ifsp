// 2.8.7 LABORATÓRIO: Avaliando diferentes tipos de médias
#include <iostream>
#include <cmath>

using namespace std;


int main(void) {
    double vector[] = { 1., 2., 3., 4., 5. };

    int n = sizeof(vector) / sizeof(vector[0]);

    double ArithmeticMean = 0;

    double HarmonicMean = 0;

    double GeometricMean = 1;

    double RootMeanSquare = 0;

	// --- MÉDIA ARITMÉTICA ---
    for (int i = 0; i < n; i++) {
        ArithmeticMean += vector[i];
    }
    ArithmeticMean /= n;

    // --- MÉDIA HARMÔNICA ---
    for (int i = 0; i < n; i++) {
        HarmonicMean += 1.0 / vector[i];
    }
    HarmonicMean = n / HarmonicMean;

    // --- MÉDIA GEOMÉTRICA
    for (int i = 0; i < n; i++) {
        GeometricMean *= vector[i];
    }
    GeometricMean = pow(GeometricMean, 1.0 / n);

    // --- MÉDIA QUADRÁTICA (RMS) ---
    for (int i = 0; i < n; i++) {
        RootMeanSquare += pow(vector[i], 2);
    }
    RootMeanSquare = sqrt(RootMeanSquare / n);
    

    cout << "Arithmetic Mean = " << ArithmeticMean << endl;

    cout << "Harmonic Mean   = " << HarmonicMean   << endl;

    cout << "Geometric Mean  = " << GeometricMean  << endl;

    cout << "RootMean Square = " << RootMeanSquare << endl;


    cout << endl;

    return 0;

}
