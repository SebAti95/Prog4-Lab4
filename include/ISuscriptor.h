#ifndef ISUSCRIPTOR_H
#define ISUSCRIPTOR_H
#include <string>
#include "DTInmueble.h"

class ISuscriptor {
    public:
        virtual void notificar(DTInmueble) = 0; 
        virtual ~ISuscriptor() {} 
};
#endif