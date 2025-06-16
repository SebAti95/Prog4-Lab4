#include "../include/AdministraPropiedad.h"

// Constructor
AdministraPropiedad::AdministraPropiedad(DTFecha* fecha) {
    this->fecha = fecha;
    this->inmobiliaria = nullptr;
    this->inmueble = nullptr;
}

// Destructor implementation
AdministraPropiedad::~AdministraPropiedad() {
    // Delete the fecha pointer
    if (fecha != nullptr) {
        delete fecha;
        fecha = nullptr;
    }
    
    // Delete all publication objects in the map
    for (auto& pair : publicaciones) {
        if (pair.second != nullptr) {
            delete pair.second;
        }
    }
    
    // Clear the map
    publicaciones.clear();
    
    // Set pointers to nullptr (we don't delete inmobiliaria or inmueble 
    // as they are likely managed elsewhere)
    inmobiliaria = nullptr;
    inmueble = nullptr;
}

// Implementation of pudoCrear method
bool AdministraPropiedad::pudoCrear(int codigoInmueble) {
    // Implementation pending
    return false;
}

// Implementation of eliminarPublicacionesAsoc method
void AdministraPropiedad::eliminarPublicacionesAsoc() {
    // Delete all publication objects in the map
    for (auto& pair : publicaciones) {
        if (pair.second != nullptr) {
            delete pair.second;
        }
    }
    
    // Clear the map
    publicaciones.clear();
}

