#include "Person.h"
#include <iostream>

Person::Person()
{
    mWeight = 0.0f;
    mFirstName = "Unknown";
    mAge = 0;
}

Person::Person(const string& name, float newWeight)
{
    mWeight = newWeight;
   mFirstName = "Unknown";
    mAge = 0;
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