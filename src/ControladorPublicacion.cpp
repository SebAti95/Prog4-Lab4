#include "../include/ControladorPublicacion.h"
#include <cstddef>

// Initialize the static instance to nullptr
ControladorPublicacion* ControladorPublicacion::instance = nullptr;

// Constructor
ControladorPublicacion::ControladorPublicacion() {
    this->manejador = ManejadorPublicacion::getInstance();
}

// Singleton getInstance method
ControladorPublicacion* ControladorPublicacion::getInstance() {
    if (instance == nullptr) {
        instance = new ControladorPublicacion();
    }
    return instance;
}

// Destructor
ControladorPublicacion::~ControladorPublicacion() {
    // Any cleanup if needed
}

// Implement the rest of the methods here
// These would be stubs for now until full implementation is needed

std::set<DTUsuario> ControladorPublicacion::listarInmobiliarias() {
    // Implementation pending
    return std::set<DTUsuario>();
}

std::set<DTInmuebleAdministrado> ControladorPublicacion::listarInmueblesAdministrados(std::string nicknameInmobiliaria) {
    // Implementation pending
    return std::set<DTInmuebleAdministrado>();
}

bool ControladorPublicacion::altaPublicacion(std::string nicknameInmobiliaria, int codigoInmueble, TipoPublicacion tipoPublicacion, std::string texto, float precio) {
    // Implementation pending
    return false;
}

std::set<DTPublicacion> ControladorPublicacion::listarPublicacion(TipoPublicacion tipoPublicacion, float precioMinimo, float precioMaximo, TipoInmueble tipoInmueble) {
    // Implementation pending
    return std::set<DTPublicacion>();
}

void ControladorPublicacion::eliminarInmueble(int codigoInmueble) {
    // Implementation pending
}
