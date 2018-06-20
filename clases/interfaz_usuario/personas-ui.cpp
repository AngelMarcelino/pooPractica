#include "../../headers/interfaz_usuario/personas-ui.h"
#include "../../headers/modelos/persona.h"
#include "../../headers/interfaz_usuario/entrada/entrada-string.h"
#include "../../headers/utils/campo.h"
#include <iostream>
#include <string>
std::string PersonasUI::obtenerPersonaSerializadaDeUsuario() {
    this->obtenedorCampos.obtenerCamposSerializados(this->listaCampos);
}

std::string PersonasUI::obtenerCampo(std::string campo) {
    std::cout << "Ingrese " << campo << ": ";
    std::string resultado = "";
    resultado = this->entradaString.getStringNoEmpty();
    resultado = transformarCamposEspeciales(campo, resultado);
    return resultado;
}


std::string PersonasUI::transformarCamposEspeciales(std::string campo, std::string resultado) {
    if(campo == this->CAMPO_SEXO) {
        if(resultado == "h"){
            return "true";
        }
        else{
            return "false";
        }
    }
    return resultado;
}


void PersonasUI::editarPersona() {
    
}


PersonasUI::PersonasUI(){
    listaCampos.push_back(*(new Campo("Nombre", NULL)));
    listaCampos.push_back(*(new Campo("Apellido Paterno", NULL)));
    listaCampos.push_back(*(new Campo("Apellido Materno", NULL)));
    listaCampos.push_back(*(new Campo("Direccion", NULL)));
    listaCampos.push_back(*(new Campo("Telefono", NULL)));
    listaCampos.push_back(*(new Campo("Ciudad", NULL)));
    listaCampos.push_back(*(new Campo("Estado", NULL)));
    listaCampos.push_back(*(new Campo("Es hombre", [](std::string input) {
        if (input == "h") {
            return "true";
        }
        return "false";
    })));
    listaCampos.push_back(*(new Campo("Pais", NULL)));
}
