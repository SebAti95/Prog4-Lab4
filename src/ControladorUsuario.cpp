#include "../include/ControladorUsuario.h"
#include "../include/Cliente.h"
#include "../include/Propietario.h"
#include "../include/Inmobiliaria.h"


bool ControladorUsuario::altaCliente(std::string nick, std::string nombre, std::string contraseña, std::string email, std::string apellido, std::string CI) {
   ManejadoUsuario* manejador = ManejadorUsuario::getInstance();
   if (manejador.getCliente(nick) != nullptr && manejador.getPropietario(nick) != nullptr && manejador.getInmobiliaria(nick) != nullptr) {
        Cliente* cliente = new Cliente(nick, nombre, contraseña, email, apellido, CI);
        manejador->agregarCliente(cliente);
        return true;
    }
    return false;

}

bool ControladorUsuario::altaPropietario(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string cuenta, std::string tel) {
    ManejadoUsuario* manejador = ManejadorUsuario::getInstance();
   if (manejador.getCliente(nick) != nullptr && manejador.getPropietario(nick) != nullptr && manejador.getInmobiliaria(nick) != nullptr) {
        Propietario* propietario = new Propietario(nick, contraseña, nombre, email, cuenta, tel);
        manejador->agregarPropietario(cliente);
        return true;
    }
    return false;
}

bool ControladorUsuario::altaInmobiliaria(std::string nick, std::string contraseña, std::string nombre, std::string email, std::string direccion, std::string url, std::string tel) {
    ManejadoUsuario* manejador = ManejadorUsuario::getInstance();
   if (manejador.getCliente(nick) != nullptr && manejador.getPropietario(nick) != nullptr && manejador.getInmobiliaria(nick) != nullptr) {
        Inmobiliaria* inmobiliaria = new Inmobiliaria(nick, contraseña, nombre, email, direccion, url, tel);
        manejador->agregarInmobiliaria(inmobiliaria);
        return true;
    }
    return false;
}