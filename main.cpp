#include <iostream>
#include "Pets.h"
#include "Shalter.h"
#include "Person.h"

using namespace std;

int main() {
    cout << "Print name, type and age of pet: " << "\n";
//    Pets acceptablePets("", "", {});
//    acceptablePets.setPets();
//    acceptablePets.getPets();


    cout << "\n";
    const Pets myPet("Whiskers", "Cat", 5);
    myPet.getPets();

    cout << "\n";

    for(int i = 0; i < 100; i++){
        cout << "=";
    }

    cout << "\n\n"
    << "Print name, experience, age and sex of Person: " << "\n";

    Person somePerson("", "", {}, "");
    somePerson.setPerson();
    somePerson.getPerson();




    return 0;
}
