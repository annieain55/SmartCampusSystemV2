#include "Staff.h"
#include <iostream>
using namespace std;

Staff::Staff(string n, string c, int a, string ct, int sid, string r, float sal)
    : Person(n, c, a, ct), staffId(sid), role(r), salary(sal) {
}

void Staff::show() const {
    cout << "Staff: " << name << " ID: " << staffId
        << " Role: " << role << " Salary: " << salary << endl;
}