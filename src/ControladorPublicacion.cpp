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

std::set<DTInmuebleListado> ControladorPublicacion::listarInmueblesNoAdministrados(std::string nickInmobiliaria){
    ManejadorUsuario* m = this->manejador;
    Inmobiliaria* inm = this->getInmobiliaria(nickInmobiliaria);
    for (std::map<int,Propietario*>::iterator i = inm->propietariosRepresentados.begin(); i != inm->propietariosRepresentados.end(); ++i) { //recorrer los propietarios asociados a la inm
        for (std::map<int,Inmueble*>::iterator j = i.p.begin(); j != inm->propietariosRepresentados.end(); ++j) //recorrer los inmuebles de ese propietario
            for();//recorrer los administra propiedad de ese inmueble
                
    };
}

/*#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> edades = { {"Ana", 25}, {"Luis", 30}, {"Juan", 22} };

    
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;
}*/

