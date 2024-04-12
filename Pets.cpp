#include <iostream>
#include <string>
#include "Pets.h"


using namespace std;

void Pets::getPets() const {
    cout << "Pet's name: " << name
         <<"\nPet's type: " << type
         <<"\nPet's age: " << age;
}

void Pets::setPets() {
    string newName;
    string newType;
    int newAge;

    cin >> newName >> newType >> newAge;

    this -> name = newName;
    this -> type = newType;
    this -> age = newAge;
}

Pets::Pets() {}
Pets::Pets(std::string
 newName):name{std::move(newName)}{}
Pets::Pets(std::string newName, std::string newType)
    :name{std::move(newName)}, type{std::move(newType)}{}
Pets::Pets(std::string newName, std::string newType, int newAge)
        :name{std::move(newName)}, type{std::move(newType)}, age{newAge}
{}
Pets::~Pets() = default;