#ifndef ADMINISTRAPROPIEDAD_H
#define ADMINISTRAPROPIEDAD_H
#include "DTFecha.h"
#include <map>
#include "Inmobiliaria.h"
#include "Publicacion.h"
#include "Inmueble.h"

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

#endif