#include <iostream>

using namespace std;

int main() {
    float produto1, produto2, produto3, produto4, produto5;
    float total, pagamento, troco;

    // Entrada dos valores dos produtos
    cout << "Digite o valor do primeiro produto: ";
    cin >> produto1;

    cout << "Digite o valor do segundo produto: ";
    cin >> produto2;

    cout << "Digite o valor do terceiro produto: ";
    cin >> produto3;

    cout << "Digite o valor do quarto produto: ";
    cin >> produto4;

    cout << "Digite o valor do quinto produto: ";
    cin >> produto5;

    // Soma dos produtos
    total = produto1 + produto2 + produto3 + produto4 + produto5;

    // Entrada do valor pago
    cout << "Digite o valor do pagamento: ";
    cin >> pagamento;

    // Cálculo do troco
    troco = pagamento - total;

    // Saída do resultado
    cout << "O valor do troco e: R$ " << troco << endl;

    return 0;
}