#ifndef USUARIOS_H
#define USUARIOS_H

#include <string>
#include "persona.h"

class Usuario : Persona{
public:
    int getIdUsuario();
    void setIdUsuario(int usuario);

    std::string getPuesto();
    void setPuesto(std::string puesto);
private:
    int idUsuario;
    std::string puesto;
};

#endif