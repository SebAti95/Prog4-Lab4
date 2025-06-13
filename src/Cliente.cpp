#include "../include/Cliente.h"

void Cliente::Cliente(std::string nickname, std::string contrasena, std::string nombre, std::string email, std::string apellido, std::string documento) 
    : Usuario(nickname, contrasena, nombre, email){
    this->apellido = apellido;
    this->documento = documento;
}    
std::string Cliente::getNick() {
    return this->nickname;
}
std::string Cliente::getPasswd() {
    return this->contrasena;
}
std::string Cliente::getNombre() {
    return this->nombre;
}
std::string Cliente::getEmail() {
    return this->email;
}
std::string Cliente::getApellido() {
    return this->apellido;
}
std::string Cliente::getDocumento() {
    return this->documento;
}
void Cliente::notificar(std::string codigoInmueble) {
    this->publicacionesSuscritas.push_back(codigoInmueble);
}
