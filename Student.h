#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
class Student : public Person {
private:
    int rollNo;
    int sem;
    float gpa;
    string courses[10];
    int courseCount;
public:
    Student(string n, string c, int a, string ct, int rn, int s, float g);
    void show() const override;
    void addCourse(string course);
    char calcGrade();
    float getGpa() const { return gpa; }
};
#endif 
