#ifndef LIBRARY_H
#define LIBRARY_H
#include "LibraryItem.h"
#include <fstream>
using namespace std;

class Library {
private:
    LibraryItem* items[50];
    int count;
public:
    Library();
    void addItem(LibraryItem* item);
    LibraryItem* searchByTitle(string t);
    void saveToFile(string fname);
};
#endif
