#ifndef ADMINISTRAPROPIEDAD_H
#define ADMINISTRAPROPIEDAD_H
#include <map>
#include "Inmueble.h"
#include "Publicacion.h"

class Inmobiliaria;

class AdministraPropiedad {
    private:
        DTFecha* fecha;
        std::map<int,Publicacion*> publicaciones;
        Inmobiliaria* inmobiliaria;
        Inmueble* inmueble;
        
    public:
        AdministraPropiedad(DTFecha* fecha);
        AdministraPropiedad(Inmobiliaria* inm, Inmueble* inmue, DTFecha* fecha);
        ~AdministraPropiedad();
        bool pudoCrear(int codigoInmueble);
        void eliminarPublicacionesAsoc();
        bool inmobiliariaAsociada(Inmobiliaria* inm);
};

#include "Inmobiliaria.h"

#endif