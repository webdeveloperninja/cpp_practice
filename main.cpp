#include <iostream>
#include "log.h"
#include "Animal.h"
#include "Dog.h"

int main()
{
    std::string name = "Robert Smith";

    for (std::size_t i = 0; i < name.size(); ++i)
    {
        std::cout << std::bitset<8>(name.c_str()[i]) << std::endl;
    }

    const std::bitset<8> bytes("01010010");

    unsigned long i = bytes.to_ulong();

    char c;
    if (i <= CHAR_MAX)
        c = static_cast<char>(i);

    return 0;
}