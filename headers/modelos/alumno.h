#ifndef ALUMNOS_H
#define ALUMNOS_H

#include <string>
#include "persona.h"

class Alumno{
public:
    int getIdAlumno();
    void setIdAlumno(int idAlumno);

    int getIdCarrera();
    void setIdCarrera(int idCarrera);

    std::string getCarrera();
    void setCarrera(std::string carrera);
private:
    int idAlumno;
    int idCarrera;
    std::string carrera;
};

#endif