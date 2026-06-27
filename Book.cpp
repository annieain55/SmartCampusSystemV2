#include "Book.h"
#include "Exceptions.h"
#include <iostream>
using namespace std;
Book::Book(string id, string t, string a, int y, string isb, string g, int cp)
    : LibraryItem(id, t, a, y), isbn(isb), genre(g), copies(cp) {
}
void Book::checkout() {
    if (copies > 0) {
        copies--;
        cout << "Book checked out: " << title << endl;
    }
    else {
        cout << "No copies available" << endl;
    }
}
void Book::checkReturn(int daysLate) {
    if (daysLate > 0) {
        float fine = daysLate * 10;
        throw OverdueException("Book overdue: " + title, fine);
    }
}