#include "../../headers/logica/base-logic.h"
#include <iostream>

BaseLogic::BaseLogic() {
}


void BaseLogic::updateFile(std::string data) {
    this->storage.open(fileName, std::ios::trunc);
    this->storage << data;
    this->storage.close();
}

BaseLogic::~BaseLogic() {
}