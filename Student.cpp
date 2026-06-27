#include "Student.h"
#include <iostream>
using namespace std;
Student::Student(string n, string c, int a, string ct, int rn, int s, float g)
    : Person(n, c, a, ct), rollNo(rn), sem(s), gpa(g), courseCount(0) {
}
void Student::show() const {
    cout << "Student: " << name << " Roll: " << rollNo
        << " Sem: " << sem << " GPA: " << gpa << endl;
}
void Student::addCourse(string course) {
    if (courseCount < 10) {
        courses[courseCount] = course;
        courseCount++;
    }
}
char Student::calcGrade() {
    if (gpa >= 3.5) return 'A';
    else if (gpa >= 3.0) return 'B';
    else if (gpa >= 2.0) return 'C';
    else return 'F';
}