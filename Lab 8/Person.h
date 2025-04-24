#pragma once 
#include <string>
using namespace std;

class Person{
    public:
    Person();
    Person(const string& name, float newWeight, int age);
    ~Person();
    //Overload the add operator
    float operator + (const Person& otherPerson);
    bool operator==(const Person& other) const; // For mFirstName comparison
    bool operator!=(const Person& other) const;
    bool operator<(const Person& other) const;  // For mAge comparison
    bool operator>(const Person& other) const;

    // Conversion operators
    operator int() const;
    operator string() const;
    operator float() const;

    private:
    float mWeight;
    string mFirstName;
    int mAge;
};
