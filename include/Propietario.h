#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
#include <map>
#include <set>
#include "Usuario.h"
#include "DTInmuebleListado.h"
#include "Inmueble.h"
#include "ISuscriptor.h"


class Propietario : public Usuario, public ISuscriptor {
    private:
        std::string cuentaBancaria;
        std::string telefono;
        std::vector<std::string> publicacionesSuscritas;
        std::map<int,Inmueble*> inmuebles;

    public:
        Propietario(std::string nickname, std::string contrasena, std::string nombre, std::string email, std::string cuentaBancaria, std::string telefono);
        ~Propietario();
        std::string getCuentaBancaria();
        std::string getTelefono();
        virtual void notificar(std::string codigoInmueble);
        std::set<DTInmuebleListado> getInmbueblesNoAdmin(Inmobiliaria* inm);
        void removeInmueble(int codigoInmueble);
};

#endif