#include <iostream>
#include "Calculadora.h"

int main() {

    int v1 = 20;
    int v2 = 15;
    Calculadora calculadora{};

    int resultado = calculadora.Sumar(v1, v2);
    std::cout << resultado << std::endl;
    return 0;

}
