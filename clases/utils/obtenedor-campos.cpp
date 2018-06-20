#include "../../headers/utils/obtenedor-campos.h"
#include "../../headers/utils/campo.h"

#include <string>
#include <list>

std::string ObtenedorCampos::obtenerCamposSerializados(std::list<Campo> campos) {
    std::string personaSerializada;
    for(Campo campo: campos) {
        personaSerializada += obtenerCampo(campo) + "#";
    }
    return personaSerializada;
}


std::string ObtenedorCampos::obtenerCampo(Campo campo) {
    std::cout << "Ingrese " << campo.aMostrar << ": ";
    std::string resultado = "";
    resultado = this->entradaString.getStringNoEmpty();
    resultado = campo.transformacion(resultado);
    return resultado;
}

