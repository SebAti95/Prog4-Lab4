#ifndef INMOBILIARIA_H
#define INMOBILIARIA_H
#include "Usuario.h"
#include <string>
#include <set>
#include "DTInmuebleAdministrado.h"
#include "ISuscriptor.h"
#include <vector>
#include "AdministraPropiedad.h"


class Inmobiliaria : public Usuario {
    private:
        std::string direccion;
        std::string url;
        std::string telefono;
        std::vector<AdministraPropiedad*> propiedadesAdministradas;
  
    public:
        Inmobiliaria(std::string nickname, std::string contrasena, std::string nombre, std::string email, std::string direccion, std::string url, std::string telefono);
        ~Inmobiliaria();
        std::set<DTInmuebleAdministrado> coleccionInmuebles();
        void agregar(ISuscriptor o);
        void eliminar(ISuscriptor o);
        bool crearPub();
};

#endif