#ifndef CONTROLADORUSUARIO_H
#define CONTROLADORUSUARIO_H

#include <string>
#include <map>
#include "Usuario.h"
#include "ManejadorUsuario.h"

class IUsuario;

class ControladorUsuario : public IUsuario{
    private:
        ManejadorUsuario* manejador;

    public:
        ControladorUsuario();
        ~ControladorUsuario();
        bool altaCliente(std::string nick, std::string nombre, std::string contraseña, std::string email, std::string apellido, std::string CI);
        bool altaPropietario(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string cuenta, std::string tel);
        bool altaInmobiliaria(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string direccion, std::string url, std::string tel);
};

#include "IUsuario.h"

#endif