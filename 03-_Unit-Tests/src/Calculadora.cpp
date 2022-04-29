#include "Calculadora.h"

int Calculadora::Sumar(int valor1, int valor2){
    return valor1 + valor2;
}

int Calculadora::Restar(int valor1, int valor2){
    return valor1 - valor2;
}

int Calculadora::Factorial(int valor){
    if(valor > 1){
        return valor * Factorial(valor -1);
    }
    return 1;

}