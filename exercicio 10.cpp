#include <iostream>

using namespace std;

int main() {

    float cotacaoDolar, quantidadeDolares, valorEmReais;

    // Entrada de dados

    cout << "Digite a cotacao do dolar: ";

    cin >> cotacaoDolar;

    cout << "Digite a quantidade de dolares: ";

    cin >> quantidadeDolares;

    // Conversão para reais

    valorEmReais = cotacaoDolar * quantidadeDolares;

    // Saída do resultado

    cout << "O valor correspondente em Reais e: R$ "

         << valorEmReais << endl;

    return 0;

}