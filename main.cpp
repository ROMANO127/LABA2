#include <iostream>
#include "Pets.h"
#include "Shalter.h"
#include "Person.h"

using namespace std;

int main() {
    cout << "Pirnt some information about Pet: " << "\n";
    Pets acceptablePets("", {}, {});
    acceptablePets.setPets();
    acceptablePets.getPets();

    cout << "\n\n"
    << "Print some information about person: " << "\n";

    Person somePerson("", {}, {}, "");
    somePerson.setPerson();
    somePerson.getPerson();

    return 0;
}
