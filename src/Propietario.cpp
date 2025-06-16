#include "../include/Propietario.h"

Propietario::Propietario(std::string nickname, std::string contrasena, std::string nombre, std::string email, std::string cuenta, std::string telefono) : Usuario(nickname, contrasena, nombre, email) {
    this->cuentaBancaria = cuenta;
    this->telefono = telefono;
};
Propietario::~Propietario(){
    this->
};
std::string Propietario::getCuentaBancaria(){
    return this->cuentaBancaria;
};
std::string Propietario::getTelefono(){
    return this->telefono;
};

void Propietario::notificar(std::string codigoInmueble) {
    this->publicacionesSuscritas.push_back(codigoInmueble);
};
