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

    cout << "\n";

    for(int i = 0; i < 200; i++){
        cout << "=";
    }

    cout << "\n\n"
    << "Print some information about person: " << "\n";

    Person somePerson("", "", {}, "");
    somePerson.setPerson();
    somePerson.getPerson();

    return 0;
}
