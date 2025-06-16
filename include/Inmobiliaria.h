#ifndef INMOBILIARIA_H 
#define INMOBILIARIA_H

#include <map>
#include <vector>
#include <set>
#include "Usuario.h"
#include "ISuscriptor.h"
#include "DTInmuebleAdministrado.h"

// Forward declarations
class AdministraPropiedad;
class Propietario;

class Inmobiliaria : public Usuario {
    private:
        std::string direccion;
        std::string url;
        std::string telefono;
        std::map<int,Propietario*> propietariosRepresentados;
        std::vector<AdministraPropiedad*> propiedadesAdministradas;
        
    public:
        Inmobiliaria(std::string nickname, std::string contrasena, std::string nombre, std::string email, std::string direccion, std::string url, std::string telefono);
        ~Inmobiliaria();
        std::string getDireccion();
        std::string getUrl();
        std::string getTelefono();
        std::set<DTInmuebleAdministrado> coleccionInmuebles();
        void agregar(ISuscriptor o);
        void eliminar(ISuscriptor o);
        bool crearPub();
};

#include "AdministraPropiedad.h"

#endif
