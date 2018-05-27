#include "../../headers/logica/alumnos-logica.h"
#include <iostream>
#include <string>

const std::string AlumnosLogica::FILE_NAME = "alumnos.txt";

void AlumnosLogica::agregarAlumno(Alumno alumno) {
    alumno.setIdAlumno(this->listaAlumnos.size() + 1);
    this->listaAlumnos.push_front(alumno);
    this->updateFile();
}

void AlumnosLogica::printData(Alumno alumno) {
    std::cout << "Id: " << alumno.getIdAlumno() <<
        "\tCarrera: " << alumno.getCarrera();
}

void AlumnosLogica::buscarAlumno(int alumnoId) {
    Alumno* founded = NULL;
    for(Alumno n : this->listaAlumnos) {
        if(n.getIdAlumno() == alumnoId) {
            founded = &n;
        }
    }
    if(founded != NULL) {
        printData(*founded);
    }
}

void AlumnosLogica::editarAlumno(Alumno alumno) {
    Alumno toEdit;
    for(Alumno n : this->listaAlumnos) {
        if(n.getIdAlumno() == alumno.getIdAlumno()) {
            toEdit = n;
        }
    }
    toEdit.setCarrera(alumno.getCarrera());
    toEdit.setIdCarrera(alumno.getIdCarrera());
    this->updateFile();
}

void AlumnosLogica::obtenerListaDeAlumnos() {
    for(Alumno n : this->listaAlumnos) {
        this->printData(n);
    }
    this->updateFile();
}

void AlumnosLogica::bajaAlumno(int alumnoId) {
    bool foundSomething = false;
    std::list<Alumno>::iterator toRemove;
    for (std::list<Alumno>::iterator iter = this->listaAlumnos.begin(); iter != this->listaAlumnos.end(); ++iter){
        if(iter->getIdAlumno() == alumnoId) {
            toRemove = iter;
            foundSomething = true;
        }
    }
    if(foundSomething) {
        this->listaAlumnos.erase(toRemove);
    }
    this->updateFile();
}
void AlumnosLogica::updateFile() {
    std::string data = "";
    for(Alumno n : this->listaAlumnos) {
        data+=n.getCarrera() + "#" +
        std::to_string(n.getIdAlumno()) + "#" +
        std::to_string(n.getIdCarrera()) + "\n";
    }
    BaseLogic::updateFile(data);
}

AlumnosLogica::AlumnosLogica() : BaseLogic::BaseLogic(){
    this->fileName = AlumnosLogica::FILE_NAME;
}

AlumnosLogica::~AlumnosLogica() {

}
