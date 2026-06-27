#include "Course.h"
#include "Exceptions.h"
Course::Course(string cd, string cn, int ch, Faculty* ins, int mc)
    : code(cd), cname(cn), creditHrs(ch), instructor(ins), maxCap(mc), enrolledCount(0) {
}
bool Course::operator==(const Course& other) const {
    return code == other.code;
}
void Course::enroll() {
    if (enrolledCount >= maxCap) {
        throw CapacityExceededException("Course is full: " + code);
    }
    enrolledCount++;
}
void Course::addToWaitlist(string studentId) {
    if (waitCount < 20) {
        waitlist[waitCount] = studentId;
        waitCount++;
    }
}
Course Course::operator+(const Course& other) const {
    Course merged = *this;
    for (int i = 0; i < other.waitCount && merged.waitCount < 20; i++) {
        merged.waitlist[merged.waitCount] = other.waitlist[i];
        merged.waitCount++;
    }
    return merged;
}
ostream& operator<<(ostream& os, const Course& c) {
    os << "Course: " << c.cname << " (" << c.code << ") Credits: " << c.creditHrs
        << " Enrolled: " << c.enrolledCount << "/" << c.maxCap;
    return os;
}