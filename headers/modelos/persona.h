#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona{
public:
    static const int NOMBRE = 1;
    static const int APELLIDO_PATERNO = 2;
    static const int APELLIDO_MATERNO = 3;
    static const int DIRECCION = 4;
    static const int TELEFONO = 5;
    static const int CIUDAD = 6;
    static const int ESTADO = 7;
    static const int ES_HOMBRE = 8;
    static const int PAIS = 9;

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
protected:
    void llenaPropiedad(int counter, std::string data);
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