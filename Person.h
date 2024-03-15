
#include <string>

#ifndef LABA2_PERSON_H
#define LABA2_PERSON_H

using namespace std;

class Person{
private:
    string name;
    string experience;
    int age;
    string sex;
public:
    void getPerson() const;
    void setPerson();

    Person(string newName="None", string experience = "none", int age = 0, string sex = "None");
    ~Person();

};



#endif //LABA2_PERSON_H
