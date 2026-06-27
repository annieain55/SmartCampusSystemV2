#include "GradStudent.h"
#include <iostream>
using namespace std;

GradStudent::GradStudent(string n, string c, int a, string ct, int rn, int s, float g, string tt, string sup)
    : Student(n, c, a, ct, rn, s, g), thesisTitle(tt), supervisor(sup) {
}

void GradStudent::show() const {
    cout << "GradStudent: " << name << " Thesis: " << thesisTitle << " Supervisor: " << supervisor << endl;
}