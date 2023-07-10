#pragma once
#include "Mammal.h"

enum Breeds {
    Yorkie,
    Cairn,
    Dandie,
    Shetland,
    Doberman,
    Lab,
    Heeler,
};

class Dog :
    public Mammal
{
public:
    Dog();
    ~Dog();

    Breeds Breed() const;
    void Breed(Breeds breed);

    void WagTail() const;
    void BegForFood() const;
    void Speak() const;

protected:
    Breeds breed;
};

