
#include <iostream>
#include "Mammal.h"
#include "Dog.h"
using namespace std;

int main()
{
    Dog fido;

    fido.Sleep();
    fido.Speak();

    fido.Breed(Cairn);
    fido.Age(10);
    fido.Weight(100);

    fido.BegForFood();
    fido.WagTail();

    Mammal mammal = fido;
    mammal.Sleep();
    mammal.Speak();
    mammal.Age(10);
    mammal.Weight(100);
}
