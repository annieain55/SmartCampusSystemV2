#include "Journal.h"
#include <iostream>
using namespace std;

Journal::Journal(string id, string t, string a, int y, string iss, int vol, int is)
    : LibraryItem(id, t, a, y), issn(iss), volume(vol), issue(is) {
}

void Journal::checkout() {
    cout << "Journal checked out: " << title << endl;
}