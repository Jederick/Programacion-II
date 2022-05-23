#include <gtest/gtest.h>
#include "../src/cuentaPalabras.h"

namespace{

    TEST(CuentaPalabras_Test, Test_Una_Linea){
        
        string linea = "Esta es una linea de texto jio jio";
        istringstream stream(linea);

        CuentaPalabras cuentaPalabras(&stream);
        
        int esperado = 8;
        int actual = cuentaPalabras.contarPalabras();

        EXPECT_EQ(esperado, actual);
    }

    TEST(CuentaPalabras_Test, Test_Varias_Lineas){
        
        ostringstream streamSalida;
        
        streamSalida << "Jederick Cajina Paniagua 18";
        streamSalida << "Sheydrik Lopez Houston 18";
        streamSalida << "Emily Smith Rojas 17";

        istringstream stream(streamSalida.str());
        CuentaPalabras cuentaPalabras(&stream);
        
        int esperado = 12;
        int actual = cuentaPalabras.contarPalabras();


    }
}