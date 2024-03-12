
#include "Person.h"
#include <iostream>
#include <string>



using namespace std;
void Person::getPerson() const {
    cout << "\nName of owner: " << name
         << "\nExperience: " << experience
         << "\nEnter your age: " << age
         << "\nEnter your sex: ";

}
Person::Person(std::string newName, bool experience,
             int age, bool sex) {}

Person::~Person(){};


