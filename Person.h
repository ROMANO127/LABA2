
#include <string>
#include <utility>


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
    Person(const Person& other);
    ~Person();

};

