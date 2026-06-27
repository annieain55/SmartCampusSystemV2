#ifndef STAFF_H
#define STAFF_H
#include "Person.h"

class Staff : public Person {
private:
    int staffId;
    string role;
    float salary;
public:
    Staff(string n, string c, int a, string ct, int sid, string r, float sal);
    void show() const override;
};
#endif
