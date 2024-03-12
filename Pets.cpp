#include <iostream>
#include <string>
#include "pets.h"


using namespace std;

void Pets::getPets() const {
    cout << "Pet's name: " << name
         <<"\nPet's type: " << type
         <<"\nPet's age: " << age;
}

void Pets::setPets() {
    string newName;
    string newType;
    int age;

    cin >> newName >> newType >> age;

    this -> name = newName;
    this -> type = newType;
    this -> age = age;
}

Pets::Pets(std::string newName, std::string newType, int newAge)
        :name{std::move(newName)}, type{std::move(newType)}, age{newAge}
{}
Pets::~Pets() {};