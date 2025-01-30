#include <iostream>
#include "Pets.h"
#include "Shalter.h"
#include "Person.h"

using namespace std;

int main() {
    cout << "Hello! Welcome to the shelter Wiskas." << endl;
    cout << "There is available pets in our shelter:" << endl;

    cout << "\n";
    const Pets myPet("Whiskers", "Cat", 5);
    const Pets myPet2("Beethowen", "dog", 12);
    myPet.getPets();
    cout << "\n\n";
    myPet2.getPets();

    cout << "\n";

    for(int i = 0; i < 100; i++){
        cout << "=";
    }

    cout << "\n\n";
    cout << "Please write your name, experience, age and sex" << "\n";


    Person somePerson("", "", {}, "");
    somePerson.setPerson();
    somePerson.getPerson();





    return 0;
}
