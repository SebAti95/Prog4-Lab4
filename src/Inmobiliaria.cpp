#include "../include/Inmobiliaria.h"

Inmobiliaria::Inmobiliaria(std::string nickname, std::string contrasena, std::string nombre, std::string email, std::string direccion, std::string url, std::string telefono) : Usuario(nickname, contrasena, nombre, email) {
    this->direccion = direccion;
    this->url = url;
    this->telefono = telefono;
}

Inmobiliaria::~Inmobiliaria() {
    for (AdministraPropiedad* propiedad : propiedadesAdministradas) {
        delete propiedad;
    }
    this->propietariosRepresentados.clear();
    delete this;
}
std::string Inmobiliaria:: getDireccion(){
    return this->direccion;
}
std::string Inmobiliaria:: getUrl(){
    return this->url;
}
std::string Inmobiliaria:: getTelefono(){
    return this->telefono;
}
DTUsuario Inmobiliaria:: getDTUsuario(){
    std::string nickname = this->getNick();
    std::string nombre = this->getNombre();
    DTUsuario dt = DTUsuario(nickname,nombre);
    return dt;
}
bool Inmobiliaria:: crearPub(Inmobiliaria* inm){
    
}
std::set<DTInmuebleListado> Inmobiliaria::getInmbueblesNoAdminPropietario() {
    std::set<DTInmuebleListado> inmueblesNoAdministrados;
    for (std::map<int,Propietario*>::iterator i = this->propietariosRepresentados.begin(); i != this->propietariosRepresentados.end(); ++i) { //recorrer los propietarios asociados a la inm
        std::set<DTInmuebleListado> listInmueblesPropietario = i->second->getInmueblesNoAdmin(this);
        inmueblesNoAdministrados.insert(listInmueblesPropietario.begin(), listInmueblesPropietario.end());
    }
    return inmueblesNoAdministrados;
}

void Inmobiliaria::altaAdministracionPropiedad(Inmueble* inmueble, DTFecha* fechaActual) {
    AdministraPropiedad* nuevaAdministracion = new AdministraPropiedad(this, inmueble, fechaActual);
    this->propiedadesAdministradas.push_back(nuevaAdministracion);
    inmueble->asociarAdministracionPropiedad(nuevaAdministracion);
}

std::set<DTInmuebleAdministrado> Inmobiliaria::coleccionInmuebles() {
    std::set<DTInmuebleAdministrado> inmueblesAdministrados;
    for(std::set<AdministraPropiedad*>::iterator it = propiedadesAdministradas.begin(); it != propiedadesAdministradas.end(); ++it) {
        Inmueble* inmueble = (*it)->getInmueble();
        if (inmueble != nullptr) {
            DTInmuebleAdministrado dtInmueble(inmueble->getCodigo(), inmueble->getDireccion(), this->getNick());
            inmueblesAdministrados.insert(dtInmueble);
        }
    }
}