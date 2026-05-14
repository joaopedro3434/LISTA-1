#include <iostream>

using namespace std;

int main() {

    float valor1, valor2, valor3, valor4, media;

    // Entrada dos valores

    cout << "Digite o primeiro valor: ";

    cin >> valor1;

    cout << "Digite o segundo valor: ";

    cin >> valor2;

    cout << "Digite o terceiro valor: ";

    cin >> valor3;

    cout << "Digite o quarto valor: ";

    cin >> valor4;

    // Cálculo da média

    media = (valor1 + valor2 + valor3 + valor4) / 4;

    // Saída do resultado

    cout << "A media aritmetica e: " << media << endl;

    return 0;
    
	}