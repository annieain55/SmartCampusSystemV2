#include "HostelManager.h"
#include <iostream>
using namespace std;

HostelManager::HostelManager(HostelBlock* b) : block(b) {}

void HostelManager::allocateRoom() {
    cout << "Room allocated" << endl;
}

void HostelManager::vacateRoom() {
    cout << "Room vacated" << endl;
}

string HostelManager::generateReport() const {
    return "Hostel occupancy report generated";
}