#include "../lib/calculadora.h"
#include <iostream>

int main(){

    Progra2::Calculadora *calc = new Progra2::Calculadora();

    int resultado = calc->sumar(1,2);
    std::cout << "El resultado de la suma es " << resultado << std::endl;

    delete calc;
    return 0;
}