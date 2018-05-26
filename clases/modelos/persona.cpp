#include "../../headers/modelos/persona.h"

std::string Persona::getNombre() {
    return this->nombre;
}
void Persona::setNombre(std::string nombre) {
    this->nombre.assign(nombre);
}

std::string Persona::getApellidoPaterno() {
    return this->apellidoPaterno;
}
void Persona::setApellidoPaterno(std::string apellidoPaterno) {
    this->apellidoPaterno.assign(apellidoPaterno);
}

std::string Persona::getApellidoMaterno() {
    return this->apellidoMaterno;
}
void Persona::setApellidoMaterno(std::string apellidoMaterno) {
    this->apellidoMaterno.assign(apellidoMaterno);
}

std::string Persona::getDireccion() {
    return this->direccion;
}
void Persona::setDireccion(std::string direccion) {
    this->direccion.assign(direccion);
}

std::string Persona::getTelefono() {
    return this->telefono;
}
void Persona::setTelefono(std::string telefono) {
    this->telefono.assign(telefono);
}

std::string Persona::getCiudad() {
    return this->ciudad;
}
void Persona::setCiudad(std::string ciudad) {
    this->ciudad.assign(ciudad);
}

std::string Persona::getEstado() {
    return this->estado;
}
void Persona::setEstado(std::string estado) {
    this->estado.assign(estado);
}

bool Persona::getEsHombre() {
    return this->esHombre;
}
void Persona::setEsHombre(bool esHombre) {
    this->esHombre = esHombre;
}

std::string Persona::getPais() {
    return this->pais;
}
void Persona::setPais(std::string pais) {
    this->pais.assign(pais);
}

