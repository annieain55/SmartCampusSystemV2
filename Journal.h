#ifndef JOURNAL_H
#define JOURNAL_H
#include "LibraryItem.h"

class Journal : public LibraryItem {
private:
    string issn;
    int volume;
    int issue;
public:
    Journal(string id, string t, string a, int y, string iss, int vol, int is);
    void checkout() override;
};
#endif
