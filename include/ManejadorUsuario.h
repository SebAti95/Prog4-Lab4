#ifndef MANEJADORUSUARIO_H
#define MANEJADORUSUARIO_H

#include <map>
#include "Usuario.h"
#include "IUsuario.h"
/*#include "Cliente.h"
#include "Inmobiliaria.h"
#include "Propietario.h"
*/

class ManejadorUsuario {
    private:
    /* 
       std::map<std::string, Cliente*> cliente;
       std::map<std::string, Inmobiliaria*> inmobiliaria;
       std::map<std::string, Propietario*> propietario;
       */
       std::map<std::string, Usuario*> usuario;
       ManejadorUsuario();
       static ManejadorUsuario* instance;
    public:/*
        void agregarCliente(Cliente cliente);
        void agregarPropietario(Propietario propietario);
        void agregarInmobiliaria(Inmobiliaria inmobiliaria);
        void eliminarCliente(Cliente cliente);
        void eliminarPropietario(Propietario propietario);
        void eliminarInmobiliaria(Inmobiliaria inmobiliaria);
        Cliente getCliente(std::string nick);
        Inmobiliaria getInmobiliaria(std::string nick);
        Propietario getPropietario(std::string nick);
        */
        ManejadorUsuario getInstance();
    };

#endif