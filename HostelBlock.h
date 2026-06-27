#ifndef HOSTELBLOCK_H
#define HOSTELBLOCK_H
#include "Room.h"
#include <string>
using namespace std;

class HostelBlock {
private:
    string blockName;
    Room* rooms[20];
    int roomCount;
public:
    HostelBlock(string bn);
    void addRoom(Room* r);
};
#endif
