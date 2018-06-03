#include "../../headers/modelos/alumno.h"
#include <string>
#include <iostream>

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

std::string Alumno::serializar() {
    std::string serialized = Persona::serializar() + "#";
    serialized+=this->getCarrera() + "#" +
        std::to_string(this->getIdAlumno()) + "#" +
        std::to_string(this->getIdCarrera());
    return serialized;
}

void Alumno::llenaPropiedad(int counter, std::string data) {
    switch(counter) {
        case Alumno::CARRERA:
            this->setCarrera(data);
            break;
        case Alumno::ID_ALUMNO:
            this->setIdAlumno(std::stoi(data));
            break;
        case Alumno::ID_CARRERA:
            this->setIdCarrera(std::stoi(data));
            break;
        default:
            Persona::llenaPropiedad(counter, data);
    }
}
void auxLlenaProp(Alumno& a,int& dataCounter, std::string* stored) {
    a.llenaPropiedad(dataCounter++, *stored);
    *stored = "";
}
void Alumno::deserializar(std::string linea) {
    Alumno alumno;
    std::string stored = "";
    int dataCounter = 1;
    for(int i = 0; i < linea.size(); i++) {
        if(linea[i] == '#' ) {
            auxLlenaProp(*this, dataCounter, &stored);
        }
        else {
            stored += linea[i];
        }
        if(i == linea.size() - 1) {
            auxLlenaProp(*this, dataCounter, &stored);
        }
    }
}