#include <iostream>

void Log(const char *message)
{
    std::cout << message << std::endl;
}

void Log(const int message)
{
    std::cout << message << std::endl;
}

void Log(std::string message)
{
    std::cout << message << std::endl;
}