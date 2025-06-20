#include "../include/AdministraPropiedad.h"

// Constructor
/*
AdministraPropiedad::AdministraPropiedad(DTFecha* fecha) {
    this->fecha = fecha;
    this->inmobiliaria = nullptr;
    this->inmueble = nullptr;
}
*/

AdministraPropiedad::AdministraPropiedad(Inmobiliaria* inm, Inmueble* inmue, DTFecha* fecha) {
    this->fecha = new DTFecha(*fecha); // Assuming DTFecha has a copy constructor
    this->inmobiliaria = inm;
    this->inmueble = inmue;
    
    // Initialize the publicaciones map
    this->publicaciones = std::map<int, Publicacion*>();
    
    // Associate the administration with the inmueble
    if (inmueble != nullptr) {
        inmueble->asociarAdministracionPropiedad(this);
    }
}

// Destructor implementation
AdministraPropiedad::~AdministraPropiedad() {
    // Delete the fecha pointer
    if (fecha != nullptr) {
        delete fecha;
        fecha = nullptr;
    }
    
    // Delete all publication objects in the map
    for (std::map<int, Publicacion*>::iterator it = publicaciones.begin(); it != publicaciones.end(); ++it) {
        if (it->second != nullptr) {
            delete it->second;
        }
    }
    
    // Clear the map
    publicaciones.clear();
    
    // Set pointers to nullptr (we don't delete inmobiliaria or inmueble 
    // as they are likely managed elsewhere)
    inmobiliaria = nullptr;
    inmueble = nullptr;
}
Inmueble* AdministraPropiedad::getInmueble(){
    return this->inmueble;
}
Inmobiliaria* AdministraPropiedad::getInmobiliaria(){
    return this->inmobiliaria;
}
DTFecha* AdministraPropiedad::getFecha(){
    return this->fecha;
}
// Implementation of pudoCrear method
bool AdministraPropiedad::puedeCrear(TipoPublicacion tipo,DTFecha* fecha) {
    // Implementation pending
    bool pub = false;
    for(std::map<int, Publicacion*>::iterator it = publicaciones.begin(); it != publicaciones.end(); ++it) {
       pub = ((it->second->getTipo()==tipo) && (it->second->getFecha() == fecha));
       if(pub)
        break;
    }
    return !pub;
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

bool AdministraPropiedad::inmobiliariaAsociada(Inmobiliaria* inm) {
    return (this->inmobiliaria == inm);
}

void AdministraPropiedad::agregarPublicacion(Publicacion* p) {
    int codigo = p->getCodigo();
    this->publicaciones[codigo]=p;
}