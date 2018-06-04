#include <iostream>
#include "./headers/interfaz_usuario/entrada/entrada-int.h"

int main(){
    EntradaInt entradaInt;
    int leido = entradaInt.getInt();
    std::cout << "Leido: " << leido << std::endl;
    int leido2 = entradaInt.getInt(1, 10);
    std::cout << "Leido2: " << leido2 << std::endl;   
}
