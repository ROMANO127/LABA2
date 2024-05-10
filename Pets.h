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

    Pets();
    Pets(string newName = "None", string newType = "none", int newAge = 0);
    Pets(const Pets& other);
    ~Pets();


};







#endif //LABA2_PETS_H
