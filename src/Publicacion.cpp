#include "../include/Publicacion.h"

Publicacion::Publicacion(int codigo, DTFecha* fecha, TipoPublicacion tipo, std::string texto, float precio, bool activa) {
    this->codigo = codigo;
    this->fecha = fecha;
    this->tipo = tipo;
    this->texto = texto;
    this->precio = precio;
    this->activa = activa;
}

Publicacion::~Publicacion() {
    if (this->fecha != nullptr) {
        delete this->fecha;
        this->fecha = nullptr;
    }
}

int Publicacion::getCodigo() {
    return this->codigo;
}

DTFecha* Publicacion::getFecha() {
    return this->fecha;
}

TipoPublicacion Publicacion::getTipo() {
    return this->tipo;
}

std::string Publicacion::getTexto() {
    return this->texto;
}

float Publicacion::getPrecio() {
    return this->precio;
}

bool Publicacion::getActiva() {
    return this->activa;
}

