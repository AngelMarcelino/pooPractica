#ifndef MENU_PR
#define MENU_PR

#include <string>
#include <list>
#include <map>
#include "./alumnos-iu.h"

class MenuPrincipal {
public: 
    typedef std::map<std::string, ModelInterfaceBase*>::iterator menuMapIter;
    void despliegaMenu();
private:
    std::map<std::string, ModelInterfaceBase*> menuMap = { 
        { "Alumnos", new AlumnosIU},
        { "Pagos", new AlumnosIU},
        { "Usuarios", new AlumnosIU},
        { "Carrera", new AlumnosIU}
    };
    ModelInterfaceBase* getModelInterfaceAt(int position);
    void pintaMenu();
    ModelInterfaceBase* seleccionaElemento();
};

#endif
