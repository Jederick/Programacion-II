#include "empleado.h"
#include "planilla.h"
#include <fstream>

#include <iostream>

using namespace std;

int main(){

    Planilla *planilla = new Planilla(); 


    Empleado *empleado = new Empleado(1, 20, "alekir");
    Empleado *empleado2 = new Empleado(2, 40, "apopo");
    Empleado *empleado3 = new Empleado(3, 10, "bejger");
    Empleado *empleado4 = new Empleado(4, 65412, "aguacate");

    /* //EJEMPLO ESCRIBIR ARCHIVO    
    planilla->agregarEmpleado(empleado);
    planilla->agregarEmpleado(empleado2);
    planilla->agregarEmpleado(empleado3);
    planilla->agregarEmpleado(empleado4);
    
    ofstream archivoSalida;
    archivoSalida.open("planilla.dat", ios::out|ios::binary);

    if(!archivoSalida.is_open()){
        cout << "No se pudo abrir el archivo planilla.dat" << endl;
    }
    cout << planilla;
    planilla->salidaEnSteamBinario(&archivoSalida);
    archivoSalida.close();*/


    ifstream archivoEntrada;
    archivoEntrada.open("planilla.dat", ios::in|ios::binary);

    if(!archivoEntrada.is_open()){
        cerr << "No se pudo abrir el archivo planilla.dat";
        return -1;
    }

    planilla->cargarDesdeStreamBinario(&archivoEntrada);
    cout << planilla;

    delete planilla;
}
