#include <iostream>
#include "Calculadora.h"

int main(){
    Calculadora calculadora{};

    int resultado = calculadora.Sumar(1,2);
    std::cout << "El resultado de la suma es: " << resultado << std::endl;
    int fact = calculadora.Factorial(10);
    std::cout << "El resultado su factorial es: " << fact << std::endl;

}


