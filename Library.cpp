#include "Library.h"
#include <iostream>
using namespace std;

Library::Library() : count(0) {}

void Library::addItem(LibraryItem* item) {
    if (count < 50) {
        items[count] = item;
        count++;
    }
}

LibraryItem* Library::searchByTitle(string t) {
    for (int i = 0; i < count; i++) {
        if (items[i]->getTitle() == t) {
            return items[i];
        }
    }
    return nullptr;
}

void Library::saveToFile(string fname) {
    ofstream f(fname);
    for (int i = 0; i < count; i++) {
        f << items[i]->getId() << " " << items[i]->getTitle() << endl;
    }
    f.close();
}