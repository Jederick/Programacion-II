#ifndef BECACINCO_H
#define BECACINCO_H

#include "becado.h"

class BecaCinco : public Becado{
    
    private:
    float reubicacion;

    public:
    BecaCinco(float reubicacion, string nombre);
    
    virtual float calculoDeposito();


};
#endif  