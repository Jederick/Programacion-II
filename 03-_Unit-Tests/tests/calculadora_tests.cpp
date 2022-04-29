#include <gtest/gtest.h>
#include "../src/Calculadora.h"

namespace
{
    TEST(Calculadora_Factorial_Test, Test_0_Retorna_1)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        int actual = calculadora.Factorial(0);
        int esperada = 1;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }




}