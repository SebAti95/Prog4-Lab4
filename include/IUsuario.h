#ifndef IUSUARIO_H
#define IUSUARIO_H
#include <string>

class ControladorUsuario;

class IUsuario {
public:
    virtual ~IUsuario() {}
    virtual bool altaCliente(std::string nick, std::string nombre, std::string contraseña, std::string email, std::string apellido, std::string CI) = 0;
    virtual bool altaPropietario(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string cuenta, std::string tel) = 0;
    virtual bool altaInmobiliaria(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string direccion, std::string url, std::string tel) = 0;
};

#include "ControladorUsuario.h"

#endif 