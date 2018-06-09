#ifndef ALUMNOS_IU
#define ALUMNOS_IU

#include "./model-interface-base.h"

class AlumnosIU : public ModelInterfaceBase {

public:
    void pintaMenu();
    void agregarAlumno();
    void editarAlumno();
    void eliminarAlumno();
    void initInterface();
private:

};

#endif