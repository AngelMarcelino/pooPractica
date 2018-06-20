#ifndef ALUMNOS_IU
#define ALUMNOS_IU

#include "./model-interface-base.h"
#include "./personas-ui.h"

#include <string>

class AlumnosIU : public ModelInterfaceBase {

public:
    void agregarAlumno();
    void editarAlumno();
    void eliminarAlumno();
    void initInterface();
    AlumnosIU();
private:
    void pintaMenu();
    void seleccionaElemMenu();
    std::string obtenerAlumnoSerializadoDeUsuario();
    PersonasUI personaUI;
};

#endif