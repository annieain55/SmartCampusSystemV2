#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H
#include <string>
using namespace std;

class LibraryItem {
protected:
    string itemId;
    string title;
    string author;
    int year;
public:
    LibraryItem(string id, string t, string a, int y);
    virtual ~LibraryItem() = default;
    virtual void checkout() = 0;
    string getTitle() const { return title; }
    string getId() const { return itemId; }
};
#endif
