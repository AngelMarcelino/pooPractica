#include "../../headers/utils/campo.h"

#include <string>
#include <functional>

Campo::Campo (
    std::string aMostrar,
    std::function<std::string(std::string)> transformacion)  {
    this->aMostrar = aMostrar;
    if (transformacion != NULL) {
        this->transformacion = transformacion;
    }
}
