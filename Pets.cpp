#include <iostream>
#include <string>
#include "pets.h"


using namespace std;
void Pets::getPets() const {
    cout << "\nName of pet: " << name
         <<"\nType: " << type
         <<"\nAge: " << age;
}
Pets::Pets(std::string newName, std::string newType, int newAge)
        :name{std::move(newName)}, type{std::move(newType)}, age{newAge}
{}
Pets::~Pets() {};