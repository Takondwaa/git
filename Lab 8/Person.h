#pragma once 
#include <string>
using namespace std;

class Person{
    public:
    Person();
    Person(const string& name, float newWeight);
    ~Person();
    //Overload the add operator
    float operator + (const Person& otherPerson);

    private:
    float mWeight;
    string mFirstName;
    int mAge;
};