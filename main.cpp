#include <iostream>
#include "log.h"
#include "Animal.h"

int main()
{
    Animal fred;
    fred.SetName("Fred");

    Log(fred.GetName());

    return 0;
}