#include "../../headers/logica/alumnos-logica.h"
#include <iostream>

void AlumnosLogica::agregarAlumno(Alumno alumno) {
    alumno.setIdAlumno(this->listaAlumnos.size() + 1);
    this->listaAlumnos.push_front(alumno);
}

void AlumnosLogica::buscarAlumno(int alumnoId) {

}

void AlumnosLogica::editarAlumno(Alumno alumno) {

}

void AlumnosLogica::obtenerListaDeAlumnos() {
    for(Alumno n : this->listaAlumnos) {
        std::cout << "Carrera: " << n.getCarrera() <<
            "Id: " <<  n.getIdAlumno();
    }
}


AlumnosLogica::AlumnosLogica() {
    Alumno a = Alumno();
    a.setIdCarrera(1);
    a.setCarrera("Informatica y computacion");
    this->listaAlumnos.push_front(a);
}