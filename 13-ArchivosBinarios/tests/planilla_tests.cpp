#include <gtest/gtest.h>
#include <sstream>
#include <fstream>

#include "../src/planilla.h"

using namespace std;

namespace{
    TEST(Planilla_Test, SalidayCargaEnStreamBinario_Test){
        
        Empleado *empleado1 = new Empleado(1, 19, "Alberto");
        Empleado *empleado2 = new Empleado(2, 22, "Sandra");

        Planilla *planillaEsperada = new Planilla();
        planillaEsperada->agregarEmpleado(empleado1);
        planillaEsperada->agregarEmpleado(empleado2);

        //Escribir
        ofstream archivoSalida;
        archivoSalida.open("planilla_tests.dat", ios::out|ios::binary);
        if(!archivoSalida.is_open()){
            cerr << "No se pudo crear el archivo planilla_test.dat." << endl;
            FAIL();
        }
        
        planillaEsperada->salidaEnSteamBinario(&archivoSalida);
        archivoSalida.close();

        //Leer
        ifstream archivoEntrada;
        archivoEntrada.open("planilla_tests.dat", ios::in|ios::binary);
        if(!archivoEntrada.is_open()){
            cerr << "No se pudo abir el archivo planilla_tests.dat" << endl;
            FAIL();
        }  

        Planilla *planillaActual = new Planilla();
        planillaActual->cargarDesdeStreamBinario(&archivoEntrada);

        ostringstream streamSalida;
        streamSalida << planillaEsperada;

        ostringstream streamCargar;
        streamCargar << planillaActual;

        delete planillaActual;
        delete planillaEsperada;

        string esperado = "Id: 1. Edad: 19. Nombre: Alberto\nId: 2. Edad: 22. Nombre: Sandra\n";
        string actualLeer = streamSalida.str();
        string actualEscribir = streamCargar.str();
    
        EXPECT_EQ(esperado, actualEscribir);
        EXPECT_EQ(esperado, actualLeer);

    }

}