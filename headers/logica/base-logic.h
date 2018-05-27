#ifndef BASE_LOGIC
#define BASE_LOGIC

#include <string>
#include<fstream>

class BaseLogic {
public:
    BaseLogic();
    ~BaseLogic();
protected:
    virtual void updateFile(std::string data);
    std::string fileName;
private:
    std::ofstream storage;
};

#endif