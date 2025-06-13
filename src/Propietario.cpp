#include "../include/Propietario.h"

Propietario::Propietario(std::string nickname, std::string contrasena, std::string nombre, std::string email, std::string cuenta, std::string telefono) : Usuario(nickname, contrasena, nombre, email) {
    this->cuentaBancaria = cuenta;
    this->telefono = telefono;
};
Propietario::~Propietario(){
    
};
std::string Propietario::getNick() {
    return this->nickname;
};
std::string Propietario::getPasswd() {
    return this->contrasena;
};
std::string Propietario::getNombre() {
    return this->nombre;
};
std::string Propietario::getEmail() {
    return this->email;
};
std::string Inmobiliaria:: getCuentaBancaria(){
    return this->cuentaBancaria;
};
std::string Inmobiliaria:: getTelefono(){
    return this->telefono;
};

void Propietario::notificar(std::string codigoInmueble) {
    this->publicacionesSuscritas.push_back(codigoInmueble);
};