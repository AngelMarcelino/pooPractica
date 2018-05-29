#ifndef ALUMNOS_H
#define ALUMNOS_H

#include <string>
#include "persona.h"
class Alumno: Persona{
public:
    static const int CARRERA = 10; // Debe iniciar en 10 porque los alumnos ya cuentan con propiedades de las personas
    static const int ID_ALUMNO = 11;
    static const int ID_CARRERA = 12;
    int getIdAlumno();
    void setIdAlumno(int idAlumno);

    int getIdCarrera();
    void setIdCarrera(int idCarrera);

    std::string getCarrera();
    void setCarrera(std::string carrera);

    void deserializar(std::string alumno);

    std::string serializar();
private:
    int idAlumno;
    int idCarrera;
    std::string carrera;
    void llenaPropiedad(int counter, std::string data);
    friend void auxLlenaProp(Alumno&, int&, std::string*);
};

#endif