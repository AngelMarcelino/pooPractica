#include "../../headers/interfaz_usuario/alumnos-iu.h"
#include "../../headers/interfaz_usuario/entrada/entrada-int.h"

#include <iostream>

void AlumnosIU::initInterface() {
    this->pintaMenu();
    this->seleccionaElemMenu();
}



void AlumnosIU::pintaMenu(){
    int count = 1;
    for (std::list<std::string>::iterator i = this->entradasMenu.begin(); i != this->entradasMenu.end(); i++) {
        std::cout << count << ". " << *i << std::endl;
        count ++;
    }
}
void AlumnosIU::seleccionaElemMenu() {
    int opc = 0;
    EntradaInt entrada;
    opc = entrada.getInt(1, this->entradasMenu.size());
    switch (opc) {
        case 1: 
            this->agregarAlumno();
            break;
        case 2:
            this->editarAlumno();
            break;
        case 3:
            this->eliminarAlumno();
            break;
        default:
            break;
    }
}

void AlumnosIU::agregarAlumno() {
    std::cout << "Agregar alumno";
}

void AlumnosIU::editarAlumno() {
    std::cout << "Editar alumno";
}

void AlumnosIU::eliminarAlumno() {
    std::cout << "Eliminar alumno";
}

AlumnosIU::AlumnosIU(){
    this->entradasMenu = {
        "Agregar alumno",
        "Editar alumno",
        "Eliminar alumno"
    };
}