#ifndef ALUMNOS_IU
#define ALUMNOS_IU

#include "./model-interface-base.h"


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
};

#endif