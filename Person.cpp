
#include "Person.h"
#include <iostream>
#include <string>



using namespace std;
void Person::getPerson() const {
    cout << "\nName of Person: " << name
         << "\nExperience of Person: " << experience
         << "\nEnter Person's age: " << age
         << "\nEnter Person's sex: " << sex;

}
void Person::setPerson() {
    string newName;
    int newExperience;
    int age;
    string sex;

    cin >> name >> experience >> age >> sex;

    this -> name = newName;
    this -> experience = newExperience;
    this -> age = age;
    this -> sex = sex;



}






Person::Person(std::string newName, int experience,
             int age, string sex) {}

Person::~Person(){}



