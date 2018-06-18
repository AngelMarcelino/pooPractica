#ifndef MODEL_INTERFACE_BASE
#define MODEL_INTERFACE_BASE

#include <list>
#include <iostream>
#include <string>
class ModelInterfaceBase {
public:
    virtual void initInterface();
protected:
    std::list<std::string> entradasMenu;
private:
};

#endif