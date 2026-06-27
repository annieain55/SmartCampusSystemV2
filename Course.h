#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
#include "Faculty.h"
using namespace std;
class Course {
private:
    string code;
    string cname;
    int creditHrs;
    Faculty* instructor;
    int maxCap;
    int enrolledCount;
    string waitlist[20];
    int waitCount = 0;
public:
    Course(string cd, string cn, int ch, Faculty* ins, int mc);
    bool operator==(const Course& other) const;
    void enroll();
    string getCode() const { return code; }
    void addToWaitlist(string studentId);
    Course operator+(const Course& other) const;
    friend ostream& operator<<(ostream& os, const Course& c);
};
#endif