#include <iostream>
#include "./headers/logica/alumnos-logica.h"
#include "./headers/modelos/persona.h"

int main(){
    AlumnosLogica *alumnosLogica = new AlumnosLogica();
    Alumno a;
    a.setNombre("Angel Marcelino");
    a.setApellidoPaterno("Gonzalez");
    a.setApellidoMaterno("Mayoral");
    a.setDireccion("Adrian Puga 2931");
    a.setCarrera("informatica");
    a.setIdCarrera(1);
    alumnosLogica->agregarAlumno(a);
    alumnosLogica->obtenerListaDeAlumnos();
}
