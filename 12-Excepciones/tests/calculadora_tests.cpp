#include <gtest/gtest.h>
#include "../src/calculadora.h"
#include <sstream>
#include "../src/excepcionDividirCero.h"
#include "../src/excepcionNumeroNegativo.h"
using namespace std;

namespace{
    TEST(Calculadora_Tests, Test_Dividir_Uso_Correcto){
        
        Calculadora *calc = new Calculadora();

        int esperado = 4;
        int actual = calc->dividir(8,2);

        EXPECT_EQ(esperado, actual);
    } 

    TEST(Calculadora_Tests, Test_Fibonacci_Negativo){
        
        Calculadora *calc = new Calculadora();
        EXPECT_THROW(int actual = calc->dividir(8,0), ExcepcionDividirCero);        
    } 

    
    TEST(Calculadora_Tests, Test_Dividir_Entre_Cero){
        
        Calculadora *calc = new Calculadora();
        EXPECT_THROW(int actual = calc->fibonacci(-7), ExcepcionNumeroNegativo);        
    } 
}