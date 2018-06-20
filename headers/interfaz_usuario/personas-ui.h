#ifndef PERSONAS_UI
#define PERSONAS_UI

#include "./entrada/entrada-string.h"
#include "../utils/obtenedor-campos.h"
#include <list>
#include <string>

class PersonasUI {
public:
    PersonasUI();
    std::string obtenerPersonaSerializadaDeUsuario();
    void editarPersona();
private:
    const std::string CAMPO_NOMBRE = "nombre";
    const std::string CAMPO_APELLIDO_PATERNO = "apellido paterno";
    const std::string CAMPO_APELLIDO_MATERNO = "apellido materno";
    const std::string CAMPO_DIRECCION = "direccion";
    const std::string CAMPO_TELEFONO = "telefono";
    const std::string CAMPO_CUIDAD = "ciudad";
    const std::string CAMPO_ESTADO = "estado";
    const std::string CAMPO_SEXO = "sexo (h = hombre; m = mujer)";
    const std::string CAMPO_PAIS = "pais";
    std::string obtenerCampo(std::string campo);
    std::string transformarCamposEspeciales(std::string campo, std::string aSerTransformado);
    EntradaString entradaString;
    ObtenedorCampos obtenedorCampos;
    std::list<Campo> listaCampos;
};

#endif
