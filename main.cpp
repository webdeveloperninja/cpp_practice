#include <iostream>
#include "log.h"
#include "Animal.h"
#include "Dog.h"

int main()
{
    Animal fred;
    fred.SetName("Fred");

    Log(fred.GetName());

    Dog spot;
    spot.SetName("Spot");
    spot.MakeSound();

    return 0;
}