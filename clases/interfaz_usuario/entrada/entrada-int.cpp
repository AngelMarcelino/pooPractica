#include "../../../headers/interfaz_usuario/entrada/entrada-int.h"
#include <iostream>
#include <string>

int EntradaInt::getInt() {
    std::string cadenaNumero = "";
    std::cin >> cadenaNumero;
    int result = 0;
    try {
        result = std::stoi(cadenaNumero);
        return result;
    }
    catch( ... ) {
        std::cout << "\nFormato invalido.\n";
        return this->getInt();
    }
}

int EntradaInt::getInt(int min, int max) {
    int result = this->getInt();
    if (result < min || result > max) {
        std::cout << "\nFuera de rango\n";
        return this->getInt(min, max);
    }
    return result;
}