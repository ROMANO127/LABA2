
#include <string>

#ifndef LABA2_PERSON_H
#define LABA2_PERSON_H

using namespace std;

class Person{
private:
    string name;
    bool experience;
    int age;
    bool sex;
public:
    void getPerson() const;
    Person(string newName="None", bool experience="false", int age=0, bool sex="None");
    ~Person();

};



#endif //LABA2_PERSON_H
