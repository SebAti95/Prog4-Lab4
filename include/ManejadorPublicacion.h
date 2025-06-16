#ifndef MANEJADORUSUARIO_H
#define MANEJADORUSUARIO_H

#include <map>
#include "IUsuario.h"
#include "Cliente.h"
#include "Inmobiliaria.h"
#include "Propietario.h"

class ManejadorPublicacion {
    private:
        static ManejadorPublicacion* instance;
        ManejadorPublicacion();
        std::map<int, Publicacion*> publicaciones;
        std::map<int, Inmueble*> inmuebles; 
        std::map<std::string, Inmobiliaria*> inmobiliarias;

    public:
        ManejadorPublicacion getInstance();
        void agregarPublicacion(Publicacion publicacion);
        void agregarInmueble(Inmueble inmueble);
        void agregarInmobiliaria(Inmobiliaria inmobiliaria);
        void eliminarPublicacion(Publicacion publicacion);
        void eliminarInmueble(Inmueble inmueble);
        void eliminarInmobiliaria(Inmobiliaria inmobiliaria);
        Publicacion getPublicacion(int codigo);
        Inmueble getInmueble(int id);
        Inmobiliaria getInmobiliaria(std::string nick);
};

#endif