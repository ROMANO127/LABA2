#include "Person.h"
#include <iostream>
#include <string>



using namespace std;
void Person::getPerson() const {
    cout << "\nName of Person: " << name
         << "\nExperience of Person: " << experience
         << "\nPerson's age: " << age
         << "\nPerson's sex: " << sex;

}
void Person::setPerson() {
    string newName;
    string newExperience;
    int newAge;
    string newSex;



    this -> name = newName;
    this -> experience = newExperience;
    this -> age = newAge;
    this -> sex = newSex;

    cin >> name >> experience >> age >> sex;


}

Person::Person(std::string newName, string experience,
             int age, string sex) {}
Person::Person(const Person &other) {

}

Person::~Person(){}

Person::Person(Person &&other) {

}


