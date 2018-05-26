#include "../../headers/modelos/alumno.h"
#include <string>

int Alumno::getIdAlumno(){
    return this->idAlumno;
}

void Alumno::setIdAlumno(int idAlumno){
    this->idAlumno = idAlumno;
}

std::string Alumno::getCarrera(){
    return this->carrera;
}

void Alumno::setCarrera(std::string carrera){
    this->carrera.assign(carrera);
}

int Alumno::getIdCarrera(){
    return this->idCarrera;
}

void Alumno::setIdCarrera(int idCarrera){
  this->idCarrera = idCarrera;
}