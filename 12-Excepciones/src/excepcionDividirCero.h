#ifndef ExcepcionDividirCero_H
#define ExcepcionDividirCero_H

#include <exception>

class ExcepcionDividirCero : public std::exception{

    public:
    ExcepcionDividirCero() noexcept = default;
    ~ExcepcionDividirCero() = default;

    virtual const char* what() const noexcept{
        return "No se puede dividir entre cero";
    }
    
};

#endif