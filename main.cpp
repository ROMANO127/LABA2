#include <iostream>
#include "Pets.h"
#include "Shalter.h"
#include "Person.h"

using namespace std;

int main() {
    Pets acceptablePets("", {});
    acceptablePets.setPets();
    acceptablePets.getPets();

    return 0;
}
