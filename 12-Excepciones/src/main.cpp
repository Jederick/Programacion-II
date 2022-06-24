#include "calculadora.h"
#include "convertidorCambio.h"
#include "excepcionDividirCero.h"
#include "excepcionNumeroNegativo.h"
#include <iostream>

int main() {
    using namespace std;

    Calculadora *calc = new Calculadora();
    ConvertidorCambio *convertidor = new ConvertidorCambio(0, 0, calc);

    try{
        float resultado = convertidor->comprar(50000);
        cout << "El resultado de su cambio es: " << resultado;
        
    }catch(const ExcepcionNumeroNegativo& e){
        cerr << "No se pueden utilizar números negativos en este método. " <<  e.what() << endl;

    }catch(const ExcepcionDividirCero& e){
        cerr << "No es posible dividir entre 0. " << e.what() << endl;

    }catch(const exception &e){
        cerr << "Error: " << e.what() << endl;
    }

    delete convertidor;
    delete calc;

    return 0;
}