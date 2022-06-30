#include "empleado.h"
#include <iostream>
#include <cstring>

Empleado::Empleado(int _id, int _edad, string _nombre){
    this->id = _id;
    this->edad = _edad;
    strcpy(this->nombre, _nombre.c_str() );
}

Empleado::Empleado(){
    this->id = 0;
    this->edad = 0;
    strcpy(this->nombre, "");
}


ostream& operator << (ostream &salida, const Empleado *empleado){
    salida << "Id: " << empleado->id << ". Edad: " << empleado->edad << ". Nombre: " << empleado->nombre << endl;
    return salida;
}