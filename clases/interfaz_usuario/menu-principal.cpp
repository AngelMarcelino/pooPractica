#include "../../headers/interfaz_usuario/menu-principal.h"
#include "../../headers/interfaz_usuario/model-interface-base.h"
#include "../../headers/interfaz_usuario/entrada/entrada-int.h"
#include <iostream>
#include <map>
#include <string>

void MenuPrincipal::despliegaMenu() {
    this->pintaMenu();
    ModelInterfaceBase* elementoMenu = this->seleccionaElemento();
    elementoMenu->initInterface();
}

void MenuPrincipal::pintaMenu() {
    int count = 1;
    for (MenuPrincipal::menuMapIter i = this->menuMap.begin(); i != this->menuMap.end(); i++) {
        std::cout << count << ". " << i->first<< std::endl;
        count++;
    }
}

ModelInterfaceBase* MenuPrincipal::seleccionaElemento() {
    EntradaInt entrada;
    int opcionMenu = entrada.getInt(1, this->menuMap.size());
    opcionMenu = opcionMenu - 1;
    return this->getModelInterfaceAt(opcionMenu);
}

ModelInterfaceBase* MenuPrincipal::getModelInterfaceAt(int position) {
    int count = 0;
    for (MenuPrincipal::menuMapIter i = this->menuMap.begin(); i != this->menuMap.end(); i++) {
        if(position == count) {
            return i->second;
        }
    }
    throw "Error";
}

