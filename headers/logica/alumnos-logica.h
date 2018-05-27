#ifndef ALUMNOS_L
#define ALUMNOS_L

#include "../modelos/alumno.h"
#include "./base-logic.h"
#include <list>

class AlumnosLogica : BaseLogic {
public:
    static const std::string FILE_NAME;
    void agregarAlumno(Alumno);
    void buscarAlumno(int id);
    void editarAlumno(Alumno);
    void obtenerListaDeAlumnos();
    void bajaAlumno(int id);
    void printData(Alumno);
    void updateFile();
    AlumnosLogica();
    ~AlumnosLogica();
private:
    std::list<Alumno> listaAlumnos;
};

#endif