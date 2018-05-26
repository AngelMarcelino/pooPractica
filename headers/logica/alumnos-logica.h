#ifndef ALUMNOS_L
#define ALUMNOS_L

#include "./modelos/alumno.h"
#include <list>

class AlumnosLogica {
public:
    void agregarAlumno(Alumno);
    void buscarAlumno(int id);
    void editarAlumno(Alumno);
    void obtenerListaDeAlumnos();
    void bajaAlumno(int id);
    AlumnosLogica();
private:
    std::list<Alumno> listaAlumnos;
};

#endif