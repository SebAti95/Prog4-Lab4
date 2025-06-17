#include "../include/ControladorPublicacion.h"
#include <cstddef>

// Initialize the static instance to nullptr
ControladorPublicacion* ControladorPublicacion::instance = nullptr;

// Constructor
ControladorPublicacion::ControladorPublicacion() { }

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
    std::set<DTUsuario> res;
    ManejadorUsuario* m = ManejadorUsuario::getInstance();
    std::set<Inmobiliaria*> li = m->getInmobiliarias();  
    for(std::set<Inmobiliaria*>::iterator i = li.begin(); i != li.end(); ++i) { // recorro inmobiliarias
        DTUsuario dt = (*i)->getDTUsuario();
        res.insert(dt);
    }
    return res;//std::set<DTUsuario>();
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

void ControladorPublicacion::altaAdministraPropiedad(std::string nicknameInmobiliaria, int codigoInmueble) {
    ManejadorUsuario* m = ManejadorUsuario::getInstance();
    Inmobiliaria* inm = m->getInmobiliaria(nicknameInmobiliaria);
    ManejadorPublicacion* mp = ManejadorPublicacion::getInstance();
    Inmueble* inmueble = mp->getInmueble(codigoInmueble);
    Factory* factory = Factory::getInstance();
    IControladorFechaActual* cfecha = factory->getControladorFechaActual();
    DTFecha* fechaActual = cfecha->getFechaActual();
    inm->altaAdministracionPropiedad(inmueble, fechaActual);
}

std::set<DTInmuebleListado> ControladorPublicacion::listarInmueblesNoAdministrados(std::string nickInmobiliaria){
    ManejadorUsuario* m = ManejadorUsuario::getInstance();
    Inmobiliaria* inm = m->getInmobiliaria(nickInmobiliaria);
    std::set<DTInmuebleListado> listInmuebles = inm->getInmbueblesNoAdminPropietario();
    return listInmuebles;             
};

