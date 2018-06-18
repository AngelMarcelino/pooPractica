#include "../../../headers/interfaz_usuario/entrada/entrada-string.h"
#include <string>

std::string EntradaString::getString() {
        std::string result;
        std::getline(std::cin, result);
        return result;
    }
std::string EntradaString::getStringNoEmpty() {
    std::string result = this->getString();
    if(result.empty()){
        return this->getStringNoEmpty();
    }
    return result;
}