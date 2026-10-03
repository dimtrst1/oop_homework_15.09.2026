#include "Flat.h"
#include<iostream>
using namespace std;

Flat::Flat()
{
    group = nullptr;
    count = 0;
    adress = nullptr;
}

Flat::Flat(int c, const char* adr)
{
    adress = new char[strlen(adr)+1];
    strcpy(adress, adr);

    count = c;
    group = new Person[count];
}

Flat::Flat(const Flat& obj)
{
    adress = new char[strlen(obj.adress) + 1];
    strcpy(adress, obj.adress);

    count = obj.count;
    group = new Person[count];
    for (int i = 0;i < count;i++)
    {
        group[i].Init(obj.group[i].GetName(), obj.group[i].GetAge());
    }
}

void Flat::Print() const
{
    cout << "Adress: " << adress << endl;
    for (int i = 0;i < count;i++)
    {
        group[i].Print();
    }
}

void Flat::Init()
{
    char buff[20];
    int age;
    for (int i = 0;i < count;i++)
    {
        cout << "Enter name: ";
        cin.getline(buff, 20);
        cout << "Enter age: ";
        cin >> age;
        group[i].Init(buff, age);
        cin.ignore();
    }
}

Flat::~Flat()
{
    delete[] group;
    delete[] adress;
}
