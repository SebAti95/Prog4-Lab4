#ifndef MANEJADORPUBLICACION_H
#define MANEJADORPUBLICACION_H

#include <map>
#include <string>
#include "Publicacion.h"
#include "Inmueble.h"
#include "Inmobiliaria.h"
class ManejadorPublicacion {
    private:
        static ManejadorPublicacion* instance;
        ManejadorPublicacion();
        std::map<int, Publicacion*> publicaciones;
        std::map<int, Inmueble*> inmuebles; 
        //std::map<std::string, Inmobiliaria*> inmobiliarias;

    public:
    static ManejadorPublicacion* getInstance();
    void agregarPublicacion(Publicacion* publicacion);
    void agregarInmueble(Inmueble* inmueble);
    void eliminarPublicacion(Publicacion* publicacion);
    void eliminarInmueble(Inmueble* inmueble);
    Publicacion* getPublicacion(int codigo);
    Inmueble* getInmueble(int id);
    //void agregarInmobiliaria(Inmobiliaria* inmobiliaria);
    //void eliminarInmobiliaria(Inmobiliaria* inmobiliaria);
    //Inmobiliaria* getInmobiliaria(std::string nick);
};

#endif
