#ifndef CARRERA_H
#define CARRERA_H
#include <iostream>
#include <string>
class Carrera
{
	int result;
public:
    int getIdCarrera();
    void setIdCarrera(int IdCarrera);

    std::string getNombreCarrera();
    void setNombreCarrera(std::string NombreCarrera);
    
    int getSemestre();
    void setSemestre(int semestre);

    double getCosto();
    void setCosto(double costo);

    float getBeca();
    void setBeca(float beca);
private:
    int idCarrera;
    std::string nombreCarrera;
    int semestre;
    double costo;
    float beca;
};
#endif