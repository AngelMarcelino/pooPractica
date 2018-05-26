#include "../../headers/modelos/usuario.h"
#include <string>

int Usuario::getIdUsuario() {
    return this->idUsuario;
}
void Usuario::setIdUsuario(int idUsuario) {
    this->idUsuario = idUsuario;
}

std::string Usuario::getPuesto() {
    return this->puesto;
}
void Usuario::setPuesto(std::string puesto) {
    this->puesto.assign(puesto);
}