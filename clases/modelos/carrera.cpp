#include "../../headers/modelos/carrera.h"

int Carrera::getIdCarrera(){
    return this->idCarrera;
}
void Carrera::setIdCarrera(int idCarrera) {
    this->idCarrera = idCarrera;
}

std::string Carrera::getNombreCarrera() {
    return this->nombreCarrera;
}
void Carrera::setNombreCarrera(std::string nombreCarrera) {
    this->nombreCarrera = nombreCarrera;
}

int Carrera::getSemestre() {
    return this->semestre;
}
void Carrera::setSemestre(int semestre) {
    this->semestre = semestre;
}

double Carrera::getCosto() {
    return this->costo;
}
void Carrera::setCosto(double costo) {
    this->costo = costo;
}

float Carrera::getBeca() {
    return this->beca;
}
void Carrera::setBeca(float beca) {
    this->beca = beca;
}
