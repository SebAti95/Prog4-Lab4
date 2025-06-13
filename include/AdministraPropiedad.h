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
        ~AdministraPropiedad();
        bool pudoCrear(int codigoInmueble);
        void eliminarPublicacionesAsoc();
};

#include "Inmobiliaria.h"

#endif