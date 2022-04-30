#include <iostream>
#include "Calculadora.h"

int main(){

    //Instanciando clase en la parte pequeña de la memoria
    Calculadora calculadora{};
    int resultado = calculadora.Sumar(1,2);
    std::cout << "El resultado de la suma es: " << resultado << std::endl;
    
    //Instanciando la clase en la parte grande de la memoria
    Calculadora* calculadoraPuntero = new Calculadora();
    int resultadoPuntero = calculadoraPuntero->Sumar(2,2); 
    std::cout << "El resultado de la suma es: " << resultadoPuntero << std::endl;
    delete calculadoraPuntero;
}


