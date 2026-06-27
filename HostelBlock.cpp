#include "HostelBlock.h"

HostelBlock::HostelBlock(string bn) : blockName(bn), roomCount(0) {}

void HostelBlock::addRoom(Room* r) {
    if (roomCount < 20) {
        rooms[roomCount] = r;
        roomCount++;
    }
}