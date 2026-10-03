#pragma once
#include "Percon.h"
class Flat
{
    Person* group;
    int count;
    char* adress;
public:
    Flat();
    Flat(int c, const char* adr);
    Flat(const Flat& obj);
    void Print()const;
    void Init();
    ~Flat();

};

