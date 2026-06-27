#ifndef FACULTY_H
#define FACULTY_H
#include "Person.h"
class Faculty : public Person {
private:
    int empId;
    string dept;
    string designation;
    string courses[5];
    int courseCount;
public:
    Faculty(string n, string c, int a, string ct, int eid, string d, string des);
    void show() const override;
    void assignCourse(string course);
};
#endif
