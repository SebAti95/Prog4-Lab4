#ifndef DTINMUEBLEADMINISTRADO_H
#define DTINMUEBLEADMINISTRADO_H
#include "DTFecha.h"

class DTInmuebleAdministrado {
    private:
        int codigo;
        std::string direccion;
        DTFecha* fechaComienzo;

    public:
        DTInmuebleAdministrado(int codigo, std::string direccion, DTFecha* fechaComienzo);
        int getCodigo();
        std::string getDireccion();
        DTFecha* getFechaComienzo();
        ~DTInmuebleAdministrado();
        
        // Operator for std::set comparison
        bool operator<(const DTInmuebleAdministrado& other) const;
};

#endif