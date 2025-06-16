#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <vector>
#include <map>
#include "Usuario.h"
#include "ISuscriptor.h"
#include "Inmueble.h"

class Propietario : public Usuario, public ISuscriptor {
    private:
        std::string cuentaBancaria;
        std::string telefono;
        std::vector<std::string> publicacionesSuscritas;
        std::map<int,Inmueble*> propiedades;

    public:
        Propietario(std::string nickname, std::string contrasena, std::string nombre, std::string email, std::string cuentaBancaria, std::string telefono);
        ~Propietario();
        /*
        virtual std::string getNick();
        virtual std::string getNombre();
        virtual std::string getPasswd();
        virtual std::string getEmail();
        */
        std::string getCuentaBancaria();
        std::string getTelefono();
        virtual void notificar(std::string codigoInmueble);
};

#endif