#ifndef PERSONAS_UI
#define PERSONAS_UI

#include "./entrada/entrada-string.h"

#include <list>
#include <string>

class PersonasUI {
public:
    PersonasUI();
    std::string obtenerPersonaSerializadaDeUsuario();
    void editarPersona();
private:
    std::string obtenerCampo(std::string campo);
    EntradaString entradaString;
    std::list<std::string, std::string> listaCampos;
};

#endif
