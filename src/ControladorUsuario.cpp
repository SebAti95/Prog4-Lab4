#include "../include/ControladorUsuario.h"
#include "../include/Cliente.h"
#include "../include/Propietario.h"
#include "../include/Inmobiliaria.h"
#include "../include/ManejadorUsuario.h"

// Initialize static instance pointer to nullptr
ControladorUsuario* ControladorUsuario::instance = nullptr;

// Constructor - initializes the manejador
ControladorUsuario::ControladorUsuario() {
    this->manejador = ManejadorUsuario::getInstance();
}

// Get instance - Singleton pattern
ControladorUsuario* ControladorUsuario::getInstance() {
    if (instance == nullptr) {
        instance = new ControladorUsuario();
    }
    return instance;
}

// Destructor
ControladorUsuario::~ControladorUsuario() {
    // Cleanup if needed
}

bool ControladorUsuario::altaCliente(std::string nick, std::string nombre, std::string contraseña, std::string email, std::string apellido, std::string CI) {
   ManejadorUsuario* manejador = this->manejador;
   if (manejador->getCliente(nick) == nullptr && manejador->getPropietario(nick) == nullptr && manejador->getInmobiliaria(nick) == nullptr) {
        Cliente* cliente = new Cliente(nick, contraseña, nombre, email, apellido, CI);
        manejador->agregarCliente(cliente);
        return true;
    }
    return false;

}

bool ControladorUsuario::altaPropietario(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string cuenta, std::string tel) {
    ManejadorUsuario* manejador = this->manejador;
   if (manejador->getCliente(nick) == nullptr && manejador->getPropietario(nick) == nullptr && manejador->getInmobiliaria(nick) == nullptr) {
        Propietario* propietario = new Propietario(nick, contraseña, nombre, email, cuenta, tel);
        manejador->agregarPropietario(propietario);
        return true;
    }
    return false;
}

bool ControladorUsuario::altaInmobiliaria(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string direccion, std::string url, std::string tel) {
    ManejadorUsuario* manejador = this->manejador;
   if (manejador->getCliente(nick) == nullptr && manejador->getPropietario(nick) == nullptr && manejador->getInmobiliaria(nick) == nullptr) {
        Inmobiliaria* inmobiliaria = new Inmobiliaria(nick, contraseña, nombre, email, direccion, url, tel);
        manejador->agregarInmobiliaria(inmobiliaria);
        return true;
    }
    return false;
}
/*
std::set<DTInmuebleListado> ControladorUsuario::listarInmueblesNoAdministrados(std::string nickInmobiliaria){
    ManejadorUsuario* m = m->getInstance();
    Inmobiliaria* inm = m->getInmobiliaria(nickInmobiliaria);
    for (std::map<int,Propietario*>::iterator i = inm->propietariosRepresentados.begin(); i != inm->propietariosRepresentados.end(); ++i) { //recorrer los propietarios asociados a la inm
        for (std::map<int,Inmueble*>::iterator j = i.p.begin(); j != inm->propietariosRepresentados.end(); ++j) //recorrer los inmuebles de ese propietario
            for();//recorrer los administra propiedad de ese inmueble
                
    };
}
*/