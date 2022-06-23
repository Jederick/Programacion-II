#include <gtest/gtest.h>
#include "../src/fraccion.h"
#include <sstream>

using namespace std;

namespace{
    TEST(Fraccion_Tests, Test_Stream_Salida){
        
        Fraccion *fraccion = new Fraccion(1,2);
        
        ostringstream streamSalida;
        streamSalida << fraccion;

        string esperado = "1/2";
        string actual = streamSalida.str();
        delete fraccion;

        EXPECT_EQ(esperado, actual);
    }

    TEST(Fraccion_Tests, Test_Suma_Fracciones){
        
        Fraccion *fraccion = new Fraccion(1,2);
        Fraccion *fraccion2 = new Fraccion(1,4);

        Fraccion *resultado = *fraccion + *fraccion2;
        
        ostringstream streamSalida;
        streamSalida << resultado;

        string esperado = "6/8";
        string actual = streamSalida.str();
        delete fraccion;
        delete fraccion2;
        delete resultado;
        EXPECT_EQ(esperado, actual);
    }

    TEST(Fraccion_Tests, Test_Suma_Fraccion_Entero){
        
        Fraccion *fraccion = new Fraccion(13,4);
        
        Fraccion *resultado = *fraccion + 5;
        
        ostringstream streamSalida;
        streamSalida << resultado;

        string esperado = "33/4";
        string actual = streamSalida.str();

        delete fraccion;
        delete resultado;
        EXPECT_EQ(esperado, actual);
    }

    TEST(Fraccion_Tests, Test_Fraccion_A_Float){
        
        Fraccion *fraccion = new Fraccion(1,2);

        float esperado = 0.5;
        float actual = fraccion->toFloat();;

        delete fraccion;
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(Fraccion_Tests, Test_Igualdad_Fracciones){
        
        Fraccion *fraccion = new Fraccion(1,2);
        Fraccion *fraccion2 = new Fraccion(2,4);

        bool esperado = true;
        bool actual = *fraccion == *fraccion2;

        delete fraccion;
        delete fraccion2;
        EXPECT_EQ(esperado, actual);
    }

    TEST(Fraccion_Tests, Test_Diferencia_Fracciones){
        
        Fraccion *fraccion = new Fraccion(1,2);
        Fraccion *fraccion2 = new Fraccion(2,4);

        bool esperado = false;
        bool actual = *fraccion != *fraccion2;

        delete fraccion;
        delete fraccion2;
        EXPECT_EQ(esperado, actual);
    }

    TEST(Fraccion_Tests, Test_Es_Menor){
        
        Fraccion *fraccion = new Fraccion(5,2);
        Fraccion *fraccion2 = new Fraccion(7,2);

        bool esperado = true;
        bool actual = *fraccion < *fraccion2;

        delete fraccion;
        delete fraccion2;
        EXPECT_EQ(esperado, actual);
    }

    TEST(Fraccion_Tests, Test_Es_Mayor){
        
        Fraccion *fraccion = new Fraccion(3,2);
        Fraccion *fraccion2 = new Fraccion(1,4);

        bool esperado = true;
        bool actual = *fraccion > *fraccion2;

        delete fraccion;
        delete fraccion2;
        EXPECT_EQ(esperado, actual);
    }

    TEST(Fraccion_Tests, Test_Menor_O_Igual){
        
        Fraccion *fraccion = new Fraccion(7,8);
        Fraccion *fraccion2 = new Fraccion(5,8);

        bool esperado = false;
        bool actual = *fraccion <= *fraccion2;

        delete fraccion;
        delete fraccion2;
        EXPECT_EQ(esperado, actual);
    }

    TEST(Fraccion_Tests, Test_Mayor_O_Igual){
        
        Fraccion *fraccion = new Fraccion(1,4);
        Fraccion *fraccion2 = new Fraccion(2,4);

        bool esperado = false;
        bool actual = *fraccion >= *fraccion2;

        delete fraccion;
        delete fraccion2;
        EXPECT_EQ(esperado, actual);
    }
}