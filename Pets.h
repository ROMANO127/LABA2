#ifndef LABA2_PETS_H
#define LABA2_PETS_H
#include <string>

using namespace std;

class Pets {
private:
    string name;
    string type;
    int age;

public:
    void getPets() const;
    void setPets();

    Pets(string newNamePet="None", string newType="None",
         int newAge=0);
    ~Pets();


};







#endif //LABA2_PETS_H
