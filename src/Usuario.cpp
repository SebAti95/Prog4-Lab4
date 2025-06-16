#include "../include/Usuario.h"

Usuario::Usuario(std::string nickname, std::string contrasena, std::string nombre, std::string email) {
    this->nickname = nickname;
    this->contrasena = contrasena;
    this->nombre = nombre;
    this->email = email;
}

std::string Usuario::getNick() {
    return this->nickname;
}
std::string Usuario::getPasswd() {
    return this->contrasena;
}
std::string Usuario::getNombre() {
    return this->nombre;
}
std::string Usuario::getEmail() {
    return this->email;
}

Usuario::~Usuario() {
    // Virtual destructor implementation
}

std::string Usuario::getNick() {
    return this->nickname;
}

std::string Usuario::getPasswd() {
    return this->contrasena;
}

std::string Usuario::getNombre() {
    return this->nombre;
}

std::string Usuario::getEmail() {
    return this->email;
}
