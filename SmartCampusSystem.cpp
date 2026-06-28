#include <iostream>
#include "Student.h"
#include "GradStudent.h"
#include "Faculty.h"
#include "Course.h"
#include "Enrollment.h"
#include "Book.h"
#include "Library.h"
#include "FeeRecord.h"
#include "Invoice.h"
#include "Room.h"
#include "HostelBlock.h"
#include "HostelManager.h"
#include "Utils.h"
#include "Reports.h"
#include "Exceptions.h"
using namespace std;

int main() {
    Student s1("Hoorain", "12345-1234567-1", 19, "0300-1111111", 188, 2, 3.7f);
    s1.show();

    GradStudent gs("Ali", "11111-1111111-1", 24, "0300-2222222", 500, 6, 3.9f, "AI in Healthcare", "Dr. Khan");
    gs.show();

    Faculty f1("Dr. Khan", "22222-2222222-2", 40, "0300-3333333", 101, "CS", "Professor");
    f1.show();

    Course c1("CS104", "OOP", 3, &f1, 2);
    try {
        c1.enroll();
        c1.enroll();
        c1.enroll();
    }
    catch (CapacityExceededException& e) {
        cout << "Exception: " << e.what() << endl;
    }
    cout << c1 << endl;

    Book b1("B001", "Clean Code", "Robert Martin", 2008, "978-1", "Programming", 2);
    b1.checkout();

    Library lib;
    lib.addItem(&b1);
    LibraryItem* found = lib.searchByTitle("Clean Code");
    if (found) cout << "Found: " << found->getTitle() << endl;

    FeeRecord fee("S188", 50000, 10000, 500);
    fee -= 20000;
    cout << "Remaining Balance: " << fee.getBalance() << endl;

    Invoice inv1("2026-06-27", 60500);
    cout << "Invoice ID: " << inv1.getId() << endl;

    Room r1(101, "Triple", 1);
    r1.addOccupant(&s1);
    HostelBlock blockA("Block A");
    blockA.addRoom(&r1);
    HostelManager hm(&blockA);
    hm.allocateRoom();
    cout << hm.generateReport() << endl;

    cout << "Grade: " << s1.calcGrade() << endl;
    cout << "Valid Age: " << Utils::isValidAge(s1.getAge()) << endl;

    return 0;
}
