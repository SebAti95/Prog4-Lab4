#ifndef INMOBILIARIA_H 
#define INMOBILIARIA_H
#include <set>
#include <vector>
#include "Usuario.h"
#include "ISuscriptor.h"
#include "DTInmuebleAdministrado.h"

class AdministraPropiedad;

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
        std::string getNick();
        std::string getPasswd();
        std::string getNombre();
        std::string getEmail();
        std::string getDireccion();
        std::string getUrl();
        std::string getTelefono();
        void agregar(ISuscriptor o);
        void eliminar(ISuscriptor o);
        bool crearPub();
};

#include "AdministraPropiedad.h"

#endif