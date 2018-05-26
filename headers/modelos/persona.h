#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona{
public:
    std::string getNombre();
    void setNombre(std::string nombre);

    std::string getApellidoPaterno();
    void setApellidoPaterno(std::string apellidoPaterno);

    std::string getApellidoMaterno();
    void setApellidoMaterno(std::string apellidoMaterno);

    std::string getDireccion();
    void setDireccion(std::string direccion);

    std::string getTelefono();
    void setTelefono(std::string telefono);
    
    std::string getCiudad();
    void setCiudad(std::string ciudad);

    std::string getEstado();
    void setEstado(std::string estado);

    bool getEsHombre();
    void setEsHombre(bool esHombre);

    std::string getPais();
    void setPais(std::string pais);

private:
    std::string nombre;
    std::string apellidoPaterno;
    std::string apellidoMaterno;
    std::string direccion;
    std::string telefono;
    std::string ciudad;
    std::string estado;
    bool esHombre;
    std::string pais;
};

#endif