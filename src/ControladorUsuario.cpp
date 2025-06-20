#include "../include/ControladorUsuario.h"
#include "../include/Cliente.h"
#include "../include/Propietario.h"
#include "../include/Inmobiliaria.h"
#include "../include/ManejadorUsuario.h"

// Initialize static instance pointer to nullptr
ControladorUsuario* ControladorUsuario::instance = nullptr;

// Constructor - initializes the manejador
ControladorUsuario::ControladorUsuario() {
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
   ManejadorUsuario* manejador = ManejadorUsuario::getInstance();
   if (manejador->getCliente(nick) == nullptr && manejador->getPropietario(nick) == nullptr && manejador->getInmobiliaria(nick) == nullptr) {
        Cliente* cliente = new Cliente(nick, contraseña, nombre, email, apellido, CI);
        manejador->agregarCliente(cliente);
        return true;
    }
    return false;

}

bool ControladorUsuario::altaPropietario(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string cuenta, std::string tel) {
    ManejadorUsuario* manejador = ManejadorUsuario::getInstance();
    this->nicknamePropietario = nick;
   if (manejador->getCliente(nick) == nullptr && manejador->getPropietario(nick) == nullptr && manejador->getInmobiliaria(nick) == nullptr) {
        Propietario* propietario = new Propietario(nick, contraseña, nombre, email, cuenta, tel);
        manejador->agregarPropietario(propietario);
        return true;
    }
    return false;
}

bool ControladorUsuario::altaInmobiliaria(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string direccion, std::string url, std::string tel) {
    ManejadorUsuario* manejador = ManejadorUsuario::getInstance();
    this->nicknameInmobiliaria = nick;
   if (manejador->getCliente(nick) == nullptr && manejador->getPropietario(nick) == nullptr && manejador->getInmobiliaria(nick) == nullptr) {
        Inmobiliaria* inmobiliaria = new Inmobiliaria(nick, contraseña, nombre, email, direccion, url, tel);
        manejador->agregarInmobiliaria(inmobiliaria);
        return true;
    }
    return false;
}

std::set<DTUsuario> ControladorUsuario::listarInmobiliarias() {
    std::set<DTUsuario> res;
    ManejadorUsuario* m = ManejadorUsuario::getInstance();
    std::set<Inmobiliaria*> li = m->getInmobiliarias();  
    for(std::set<Inmobiliaria*>::iterator i=li.begin();i!=li.end();++i){//recorro inmobiliarias
        DTUsuario dt = (*i)->getDTUsuario();
        res.insert(dt);
    }
    return res;
}

std::set<DTUsuario*> ControladorUsuario::listarPropietarios() {
    std::set<DTUsuario*> res;
    ManejadorUsuario* m = ManejadorUsuario::getInstance();
    std::set<Propietario*> propietarios = m->getPropietarios(); // Obtengo los propietarios del manejador
    for(std::set<Propietario*>::iterator i = propietarios.begin(); i != propietarios.end(); ++i) { //recorro propietarios
        DTUsuario dt = (*i)->getDTUsuario();
        res.insert(dt);
    }
    return res;
}
void ControladorUsuario::altaCasa(std::string direccion, int numeroPuerta, float superficie, int anoConstruccion, bool esPH, bool techo) {
    this->codigoInmueble++;
    Casa casa = Casa(codigoInmueble, direccion, numeroPuerta, superficie, anoConstruccion, esPH, techo); 

}

void ControladorUsuario::altaApartamento(std::string direccion, int numeroPuerta, float superficie, int anoConstruccion, int piso, bool tieneAscensor, float gastosComunes) {
    
}

void representarPropietario(std::string nicknamePropietario);

