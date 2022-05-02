#ifndef BECACUATRO_H
#define BECACUATRO_H

#include "becado.h"

class BecaCuatro : public Becado{
    
    private:
    float gastosCarrera;

    public:
    BecaCuatro(float gastosCarrera, string nombre);
    
    virtual float calculoDeposito();
    virtual string obtenerNombre();

};
#endif  