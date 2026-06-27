#include "Faculty.h"
#include <iostream>
using namespace std;
Faculty::Faculty(string n, string c, int a, string ct, int eid, string d, string des)
    : Person(n, c, a, ct), empId(eid), dept(d), designation(des), courseCount(0) {
}
void Faculty::show() const {
    cout << "Faculty: " << name << " ID: " << empId
        << " Dept: " << dept << " Designation: " << designation << endl;
}
void Faculty::assignCourse(string course) {
    if (courseCount < 5) {
        courses[courseCount] = course;
        courseCount++;
    }
}