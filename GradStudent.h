#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H
#include "Student.h"
using namespace std;

class GradStudent : public Student {
private:
    string thesisTitle;
    string supervisor;
public:
    GradStudent(string n, string c, int a, string ct, int rn, int s, float g, string tt, string sup);
    void show() const override;
};
#endif
