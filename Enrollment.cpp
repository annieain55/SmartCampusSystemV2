#include "Enrollment.h"
Enrollment::Enrollment(Student* s, Course* c, string d)
    : student(s), course(c), date(d), grade(' ') {
}