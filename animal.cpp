#include <iostream>
#include "Animal.h"

void Animal::SetName(std::string name)
{
    this->name = name;
}

std::string Animal::GetName()
{
    return this->name;
}