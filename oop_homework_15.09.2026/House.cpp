#include "House.h"
#include <iostream>
using namespace std;

House::House()
{
    arr_of_flats = nullptr;
    count = 0;
}

House::House(int c)
{
    count = c;
    arr_of_flats = new Flat[count];
}

void House::Init()
{
    for(int i = 0; i < count; i++)
    {
        arr_of_flats[i].Init();
    }
}

void House::Print()
{
    cout << "In this house " << count << " flats:" << endl;
    
    for (int i = 0; i < count; i++)
       {
           cout << "Flat " << i + 1 << ":" << endl;
           arr_of_flats[i].Print();
       }
}

House::~House()
{
    delete[] arr_of_flats;
}
