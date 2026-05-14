#include <iostream>

using namespace std;

int main() {

    float celsius, fahrenheit;

    // Entrada da temperatura em Celsius

    cout << "Digite a temperatura em graus Celsius: ";

    cin >> celsius;

    // Conversão para Fahrenheit

    fahrenheit = (9 * celsius + 160) / 5;

    // Saída do resultado

    cout << "A temperatura em Fahrenheit e: " << fahrenheit << " °F" << endl;

    return 0;

}