#ifndef CAMPO
#define CAMPO

#include <functional>
#include <string>

class Campo {
public:

    Campo( 
        std::string aMostrar,
        std::function<std::string(std::string)> transformacion
     );

    std::string aMostrar;
    std::function<std::string(std::string)> transformacion
        = [](std::string input){ return input; };
};

#endif