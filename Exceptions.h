#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include <string>
using namespace std;

class CapacityExceededException {
private:
    string msg;
public:
    CapacityExceededException(string m) : msg(m) {}
    string what() { return msg; }
};

class OverdueException {
private:
    string msg;
    float fine;
public:
    OverdueException(string m, float f) : msg(m), fine(f) {}
    string what() { return msg; }
    float getFine() { return fine; }
};
#endif
