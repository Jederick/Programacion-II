#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora{

private:
    int v1 = 0;
    int v2 = 0;
    
public:
    int Sumar(int valor1, int valor2);
    int Restar(int valor1, int valor2);
    int Factorial(int valor);
};

#endif