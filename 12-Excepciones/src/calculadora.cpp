#include "calculadora.h"
#include "excepcionDividirCero.h"
#include "excepcionNumeroNegativo.h"

Calculadora::Calculadora(){
}

int Calculadora::sumar(int valor1, int valor2){
    return valor1 + valor2;
}

int Calculadora::restar(int valor1, int valor2){
    return valor1 - valor2;
}

int Calculadora::multiplicar(int valor1, int valor2){
    return valor1 * valor2;
}

float Calculadora::dividir(float valor1, float valor2){
    if(valor1 == 0 || valor2 == 0){
        throw ExcepcionDividirCero();
    }else{
        return valor1 / valor2;
    }
}

int Calculadora::fibonacci(int numero){
    
    if(numero < 0){
        throw ExcepcionNumeroNegativo();
    }else if(numero <= 1 ){
        return 1;
    }

    return numero * fibonacci(numero);

}