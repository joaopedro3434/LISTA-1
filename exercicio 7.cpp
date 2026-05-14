#include <iostream>

using namespace std;

int main() {

    float milhasMaritimas, quilometros;

    // Entrada de dados

    cout << "Digite a quantidade de milhas maritimas: ";

    cin >> milhasMaritimas;

    // Conversão

    quilometros = (milhasMaritimas * 1852) / 1000;

    // Saída

    cout << "A distancia em quilometros e: " << quilometros << " km" << endl;

    return 0;

}