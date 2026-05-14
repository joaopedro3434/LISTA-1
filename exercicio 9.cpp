#include <iostream>

#include <cmath>

using namespace std;

int main() {

    float diametro, raio, area;

    const float PI = 3.14159;

    // Entrada do diâmetro

    cout << "Digite o diametro do circulo: ";

    cin >> diametro;

    // Cálculo do raio

    raio = diametro / 2;

    // Cálculo da área

    area = PI * pow(raio, 2);

    // Saída do resultado

    cout << "A area do circulo e: " << area << endl;

    return 0;

}