#ifndef INMUEBLE_H
#define INMUEBLE_H
#include <string>
#include <vector>

class AdministraPropiedad;

class Inmueble {
    private:
        int codigo;
        std::string direccion;
        int numeroPuerta;
        int superficie;
        int anoConstruccion;
        std::vector<AdministraPropiedad*> administraciones;

    public:
        Inmueble(int codigo, std::string direccion, int numeroPuerta, int superficie, int anoConstruccion);
        ~Inmueble();
        int getCodigo();
        std::string getDireccion();
        int getNumeroPuerta();
        int getSuperficie();
        int getAnoConstruccion();
        void removePropietario();
};

#include "AdministraPropiedad.h"

#endif