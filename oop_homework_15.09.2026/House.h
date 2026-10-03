#pragma once
#include "Flat.h"

class House
{
    Flat* arr_of_flats;
    int count;
public:
    House();
    House(int c);
    void Init();
    void Print();
    ~House();
    
};
