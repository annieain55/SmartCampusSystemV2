#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person {
protected:
    string name;
    string cnic;
    int age;
    string contact;
public:
    Person(string n, string c, int a, string ct);
    virtual ~Person() = default;
    virtual void show() const = 0;
    string getName() { return name; }
    string getCnic() { return cnic; }
    int getAge() { return age; }
    string getContact() { return contact; }
};
#endif