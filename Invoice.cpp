#include "Invoice.h"
#include <iostream>
using namespace std;

int Invoice::counter = 1000;

Invoice::Invoice(string d, float amt) : date(d), totalAmount(amt) {
    counter++;
    invoiceId = counter;
}

Invoice::Invoice(const Invoice& other) {
    invoiceId = other.invoiceId;
    date = other.date;
    totalAmount = other.totalAmount;
}

Invoice::~Invoice() {
    cout << "Invoice " << invoiceId << " destroyed" << endl;
}