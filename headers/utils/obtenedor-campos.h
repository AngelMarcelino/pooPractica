#ifndef OBTENEDOR_CAMPOS
#define OBTENEDOR_CAMPOS

#include "./campo.h"
#include "../interfaz_usuario/entrada/entrada-string.h"
#include <list>
#include <string>

class ObtenedorCampos {
public:
    std::string obtenerCamposSerializados(std::list<Campo>);
private:
    std::string obtenerCampo(Campo aMostrar);
    std::string transformarCamposEspeciales(Campo campo, std::string);
    EntradaString entradaString;
};

#endif
