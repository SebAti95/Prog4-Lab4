#ifndef PROPIETARIO_H
#define PROPIETARIO_H
#include "Usuario.h"
#include "ISuscriptor.h"
#include <vector>

class Propietario : public Usuario, public ISuscriptor {
    private:
        std::string cuentaBancaria;
        std::string telefono;
        std::vector<std::string> publicacionesSuscritas;
    public:
        Propietario(std::string nickname, std::string contrasena, std::string nombre, std::string email, std::string cuentaBancaria, std::string telefono);
        ~Propietario();
        virtual string getCuentaBancaria();
        virtual string getTelefono();
        virtual string getNick();
        virtual string getPasswd();
        virtual string getNombre();
        virtual string getEmail();
        virtual void notificar(std::string codigoInmueble);
};

#endif