#include <iostream>
#include "./headers/logica/alumnos-logica.h"

int main(){
    AlumnosLogica *alumnosLogica = new AlumnosLogica();
    Alumno marce;
    Alumno ari;
    marce.setCarrera("Computacion");
    marce.setIdCarrera(1);
    ari.setCarrera("Industrial");
    ari.setIdCarrera(2);
    alumnosLogica->agregarAlumno(marce);
    alumnosLogica->agregarAlumno(ari);
    alumnosLogica->agregarAlumno(ari);
    alumnosLogica->agregarAlumno(ari);
    alumnosLogica->obtenerListaDeAlumnos();
}
