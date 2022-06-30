#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <stdio.h>

using namespace std;

class Empleado{

    private:
    int id;
    int edad;
    char nombre[12]; 

    public:
    Empleado(int id, int edad, string nombre);
    Empleado();
    
    friend ostream& operator << (ostream &salida, const Empleado *empleado);

};

#endif