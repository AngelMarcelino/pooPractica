#include "../../headers/interfaz_usuario/personas-ui.h"
#include "../../headers/modelos/persona.h"
#include "../../headers/interfaz_usuario/entrada/entrada-string.h"
#include <iostream>
#include <string>
std::string PersonasUI::obtenerPersonaSerializadaDeUsuario() {
    std::string personaSerializada;
    for(std::string campo: this->listaCampos) {
        personaSerializada += obtenerCampo(campo) + "#";
    }
    return personaSerializada;
}

std::string PersonasUI::obtenerCampo(std::string campo) {
    std::cout << "Ingrese " << campo;
    return this->entradaString.getStringNoEmpty();
}

void PersonasUI::editarPersona() {
    
}


PersonasUI::PersonasUI(){
    listaCampos.push_back("nombre");
    listaCampos.push_back("apellido paterno");
    listaCampos.push_back("apellido materno");
    listaCampos.push_back("direccion");
    listaCampos.push_back("telefono");
    listaCampos.push_back("ciudad");
    listaCampos.push_back("estado");
    listaCampos.push_back("sexo (h = hombre; m = mujer)");
    listaCampos.push_back("pais");
}