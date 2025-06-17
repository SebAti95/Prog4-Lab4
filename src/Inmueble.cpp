#include "../include/Inmueble.h"

Inmueble::Inmueble(int codigo, std::string direccion, int numeroPuerta, int superficie, int anoConstruccion) {
    this->codigo = codigo;
    this->direccion = direccion;
    this->numeroPuerta = numeroPuerta;
    this->superficie = superficie;
    this->anoConstruccion = anoConstruccion;
}

Inmueble::~Inmueble() {
    removePropietario();
    this->administraciones.clear();
    // Removed 'delete this' which causes undefined behavior
}
int Inmueble::getCodigo() {
    return this->codigo;
}
std::string Inmueble::getDireccion() {
    return this->direccion;
}
int Inmueble::getNumeroPuerta() {
    return this->numeroPuerta;
}
int Inmueble::getSuperficie() {
    return this->superficie;
}
int Inmueble::getAnoConstruccion() {
    return this->anoConstruccion;
}
void Inmueble::removePropietario() {
    
}
bool Inmueble::esAdministrado(Inmobiliaria* inm) {
    std::vector<AdministraPropiedad*>::iterator i;
    for (i = this->administraciones.begin(); i != this->administraciones.end(); ++i) { 
        bool administra = (*i)->inmobiliariaAsociada(inm);
        if (administra == true){
            return true;
        }
    }
    return false;
}

void Inmueble::asociarAdministracionPropiedad(AdministraPropiedad* adminPropiedad) {
    this->administraciones.push_back(adminPropiedad);
}
