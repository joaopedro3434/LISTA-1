#include <iostream>

#include <cmath>

using namespace std;

int main() {

    float valor1, valor2, mediaGeometrica;

    // Entrada dos valores

    cout << "Digite o primeiro valor: ";

    cin >> valor1;

    cout << "Digite o segundo valor: ";

    cin >> valor2;

    // Cálculo da média geométrica

    mediaGeometrica = sqrt(valor1 * valor2);

    // Saída do resultado

    cout << "A media geometrica e: " << mediaGeometrica << endl;

    return 0;

}