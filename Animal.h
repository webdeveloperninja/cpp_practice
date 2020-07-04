#pragma Once
#include <iostream>

class Animal
{
private:
    std::string name;

public:
    std::string GetName();
    void SetName(std::string name);
};