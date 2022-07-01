#ifndef PLANILLA_H
#define PLANILLA_H

#include <vector>
#include <iostream>
#include "empleado.h"

using namespace std;

class Planilla{
    
    private:
    vector<Empleado*> empleados;

    public:
    Planilla();
    ~Planilla();

    void agregarEmpleado(Empleado* nuevoEmpleado);
    void salidaEnSteamBinario(ostream *streamSalida);
    void cargarDesdeStreamBinario(istream *streamEntrada);
    void cargarDesdeStreamBinarioPorId(istream *streamEntrada, int idEmpleado);

    friend ostream& operator << (ostream &salida, const Planilla *planilla);
};

#endif