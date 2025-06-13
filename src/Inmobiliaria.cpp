#include "../include/Inmobiliaria.h"

Inmobiliaria::Inmobiliaria(std::string nickname, std::string contrasena, std::string nombre, std::string email, std::string direccion, std::string url, std::string telefono) : Usuario(nickname, contrasena, nombre, email) {
    this->direccion = direccion;
    this->url = url;
    this->telefono = telefono;
}

Inmobiliaria::~Inmobiliaria() {
    for (auto& propiedad : propiedadesAdministradas) {
        delete propiedad;
    }
}
std::string Inmobiliaria::getNick() {
    return this->nickname;
}
std::string Inmobiliaria::getPasswd() {
    return this->contrasena;
}
std::string Inmobiliaria::getNombre() {
    return this->nombre;
}
std::string Inmobiliaria::getEmail() {
    return this->email;
}
std::string Inmobiliaria:: getDireccion(){
    return this->direccion;
}
std::string Inmobiliaria:: getUrl(){
    return this->url;
}
std::string Inmobiliaria:: getTelefono(){
    return this->telefono;
}
/*
std::set<DTInmuebleAdministrado> Inmobiliaria::coleccionInmuebles() {

}
*/