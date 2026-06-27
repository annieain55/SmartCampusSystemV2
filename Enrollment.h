#ifndef ENROLLMENT_H
#define ENROLLMENT_H
#include <string>
#include "Student.h"
#include "Course.h"
using namespace std;

class Enrollment {
private:
    Student* student;
    Course* course;
    string date;
    char grade;
public:
    Enrollment(Student* s, Course* c, string d);
    void setGrade(char g) { grade = g; }
    char getGrade() const { return grade; }
};
#endif
