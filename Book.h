#ifndef BOOK_H
#define BOOK_H
#include "LibraryItem.h"
class Book : public LibraryItem {
private:
    string isbn;
    string genre;
    int copies;
public:
    Book(string id, string t, string a, int y, string isb, string g, int cp);
    void checkout() override;
    void checkReturn(int daysLate);
};
#endif