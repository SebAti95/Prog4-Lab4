#include <string>
#include <map>
#include "ControladorUsuario.h"
#include "Cliente.h"
#include "Propietario.h"
#include "Inmobiliaria.h"


bool ControladorUsuario::altaCliente(std::string nick, std::string nombre, std::string contraseña, std::string email, std::string apellido, std::string CI) {
    if (this->usuarios.find(nick) != this->usuarios.end()) {
        Cliente* cliente = new Cliente(nick, nombre, email, apellido, contraseña, CI);
        this->usuarios[nick] = cliente;
        return true;
    }
    return false;
}

bool ControladorUsuario::altaPropietario(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string cuenta, std::string tel) {
    if (this->usuarios.find(nick) != this->usuarios.end()) {
        Propietario* propietario = new Propietario(nick, nombre, email, cuenta, contraseña, tel);
        this->usuarios[nick] = propietario;
        return true;
    }
    return false;
}

bool ControladorUsuario::altaInmobiliaria(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string direccion, std::string url, std::string tel) {
    if (this->usuarios.find(nick) != this->usuarios.end()) {
        Inmobiliaria* inmobiliaria = new Inmobiliaria(nick, nombre, email, direccion, url, contraseña, tel);
        this->usuarios[nick] = inmobiliaria;
        return true;
    }
    return false;
}