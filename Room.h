#ifndef ROOM_H
#define ROOM_H
#include "Student.h"
using namespace std;

class Room {
private:
    int roomNo;
    string type;
    int floor;
    Student* occupants[3];
    int occCount;
public:
    Room(int rn, string t, int fl);
    bool addOccupant(Student* s);
};
#endif