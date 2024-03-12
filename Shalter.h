#ifndef UNTITLED2_SHALTER_H
#define UNTITLED2_SHALTER_H
#include "pets.h"


using namespace std;

class Shalter{
private:
    string name;
    string type;
public:
    Shalter(string newName="None", string newType="");
    ~Shalter();
};

#endif //UNTITLED2_SHALTER_H
