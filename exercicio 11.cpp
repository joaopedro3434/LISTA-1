#include <iostream>

#include <cmath>

using namespace std;

int main() {

    double X, Y, resultado;

    // Entrada dos valores

    cout << "Digite o valor de X: ";

    cin >> X;

    cout << "Digite o valor de Y: ";

    cin >> Y;

    // Cálculo de X elevado a Y

    resultado = pow(X, Y);

    // Saída do resultado

    cout << "O resultado de X elevado a Y e: "

         << resultado << endl;

    return 0;

}