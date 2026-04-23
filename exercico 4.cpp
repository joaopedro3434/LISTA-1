#include<iostream>

cout << "Digite o valor da base do triangulo: "
cin >> base ;

cout << "Digite o valor da altura do triangulo: ";
cin >> altura;

// Validação
if (base <= 0 || altura <= 0) {
    cout << "Erro: base e altura devem ser valores positivos." << endl;
    return 1;
}

double area = calcularArea(base, altura);

cout << "A area do triangulo e: " << area << endl;

return 0;