#pragma once
class Person
{
    char* name;
    int age;
public:
    Person();
    Person(const char* n, int a);
    Person(const Person& obj);
    void Print()const;
    void Init(const char* n, int a);
    ~Person();

    // getter setter
    const char* GetName() { return name; }
    int GetAge() { return age; }

};

