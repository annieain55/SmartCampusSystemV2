#include "Room.h"

Room::Room(int rn, string t, int fl) : roomNo(rn), type(t), floor(fl), occCount(0) {}

bool Room::addOccupant(Student* s) {
    if (occCount < 3) {
        occupants[occCount] = s;
        occCount++;
        return true;
    }
    return false;
}