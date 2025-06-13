#ifndef CLIENTE_H
#define CLIENTE_H
#include "Usuario.h"
#include "ISuscriptor.h"

class Cliente : public Usuario, public ISuscriptor {
    private:
        std::string apellido;
        std::string documento;
        vector<std::string> publicacionesSuscritas; 
    
    public:
        Cliente(std::string nickname, std::string contrasena, std::string nombre, std::string email, std::string apellido, std::string documento);
        ~Cliente();
        std::string getNick();
        std::string getPasswd();
        std::string getNombre();
        std::string getEmail();
        std::string getApellido();
        std::string getDocumento();
        virtual void notificar(std::string codigoInmueble);
};
#endif