#include "Person.h"
#include <iostream>

Person::Person()
{
    mWeight = 0.0f;
    mFirstName = "Unknown";
    mAge = 0;
}

Person::Person(const string& name, float newWeight, int age)
{
    mWeight = newWeight;
   mFirstName = name;
    mAge = age;
}

// Conversion operators
Person::operator int() const {
    return mAge;
}

Person::operator string() const {
    return mFirstName;
}

Person::operator float() const {
    return mWeight;
}

Person::~Person()
{
  // No dynamic memory, so nothing special needed
    cout << "Destructor called for " << mFirstName << endl;
}

// Overload the + operator to add weights
float Person::operator+(const Person& otherPerson)
{
    return this->mWeight + otherPerson.mWeight;
}

// Overload == to compare names
bool Person::operator==(const Person& other) const {
    return mFirstName == other.mFirstName;
}

// Overload != to compare names
bool Person::operator!=(const Person& other) const {
    return !(*this == other);
}

// Overload < to compare ages
bool Person::operator<(const Person& other) const {
    return mAge < other.mAge;
}

// Overload > to compare ages
bool Person::operator>(const Person& other) const {
    return mAge > other.mAge;
}
