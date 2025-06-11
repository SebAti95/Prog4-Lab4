#ifndef CONTROLADORPUBLICACION_H
#define CONTROLADORPUBLICACION_H

#include <string>
#include <map>
#include <set>

#include "Inmueble.h"
#include "Inmobiliaria.h"
#include "IPublicacion.h"
#include "DTUsuario.h"
#include "Publicacion.h"

class ControladorPublicacion : public IPublicacion {
    private:
        std::map<int, Publicacion*> publicaciones;
        std::map<int, Inmueble*> inmuebles; 
        std::map<std::string, Inmobiliaria*> inmobiliarias;
    public:
        ControladorPublicacion();
        ~ControladorPublicacion();
        std::set<DTUsuario> listarInmobiliarias();
        std::set<DTInmuebleAdministrado> listarInmueblesAdministrados(std::string nicknameInmobiliaria);
        bool altaPublicacion(std::string nicknameInmobiliaria, int codigoInmueble, TipoPublicacion tipoPublicacion, std::string texto, float precio);
        std::set<DTPublicacion> listarPublicacion(TipoPublicacion tipoPublicacion, float precioMinimo, float precioMaximo, TipoInmueble tipoInmueble);
        void eliminarInmueble(int codigoInmueble);
};
#endif                      