#include<iostream>
#include "Percon.h"
using namespace std;

Person::Person():name(nullptr),age(0){}

Person::Person(const char* n, int a)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    age = a;
}

Person::Person(const Person& obj)
{
    name = new char[strlen(obj.name) + 1];
    strcpy(name, obj.name);
    age = obj.age;
}

void Person::Print() const
{
    cout << "Name: " << name << endl
         << "Age: " << age << endl << endl;
}

void Person::Init(const char * n, int a) //самостоятельно
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    age = a;
}

Person::~Person()
{
    delete[] name;
}
