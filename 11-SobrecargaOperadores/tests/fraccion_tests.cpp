#include <gtest/gtest.h>
#include "../src/fraccion.h"
#include <sstream>

using namespace std;

namespace{
    TEST(Fraccion_Tests, Test_StreamSalida){
        
        Fraccion *fraccion = new Fraccion(1,2);
        
        ostringstream streamSalida;
        streamSalida << fraccion;

        string esperado = "1/2";
        string actual = streamSalida.str();
        delete fraccion;

        EXPECT_EQ(esperado, actual);
    }

    TEST(Fraccion_Tests, Test_SumaFracciones){
        
        Fraccion *fraccion = new Fraccion(1,2);
        Fraccion *fraccion2 = new Fraccion(1,4);

        Fraccion *resultado = *(fraccion) + *(fraccion2);
        
        ostringstream streamSalida;
        streamSalida << resultado;

        string esperado = "6/8";
        string actual = streamSalida.str();
        delete fraccion;

        EXPECT_EQ(esperado, actual);
    }
}