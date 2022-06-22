#include <gtest/gtest.h>
#include "../src/calculadora.h"

namespace{
    TEST(Calculadora_Tests, Test_Sumar){
    
        Progra2::Calculadora *calc = new Progra2::Calculadora();

        int esperado = 5;
        int actual = calc->sumar(2, 3);
        delete calc;

        EXPECT_EQ(esperado, actual);
    }

}