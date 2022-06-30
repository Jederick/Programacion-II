#include "planilla.h"

Planilla::Planilla(){
}

void Planilla::agregarEmpleado(Empleado *empleado){
    this->empleados.push_back(empleado);
}

Planilla::~Planilla(){
    for(Empleado *empleado : this->empleados){
        delete empleado;
    }
}

void Planilla::salidaEnSteamBinario(ostream *streamSalida){
    for(Empleado *empleado : this->empleados){
        streamSalida->write((char*)empleado, sizeof(Empleado));
    }
}

void Planilla::cargarDesdeStreamBinario(istream *streamEntrada){
    streamEntrada->seekg(0, ios::end);
    int cantidadBytes = streamEntrada->tellg();
    int cantidadEmpleados = cantidadBytes / sizeof(Empleado);

    streamEntrada->seekg(0, ios::beg);
    for(int indice = 0; indice < cantidadEmpleados; indice++){
        Empleado *empleado = new Empleado();
        //Empiece a leer a partir del byte:
    
        streamEntrada->read((char *)empleado, sizeof(Empleado));

        this->agregarEmpleado(empleado);
    }
}

ostream& operator << (ostream &salida, const Planilla *planilla){
    for(Empleado *empleado : planilla->empleados){
        salida << empleado;
    }

    return salida;
}