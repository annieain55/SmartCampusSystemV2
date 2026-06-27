#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

class Invoice {
private:
    int invoiceId;
    string date;
    float totalAmount;
    static int counter;
public:
    Invoice(string d, float amt);
    Invoice(const Invoice& other);
    ~Invoice();
    int getId() const { return invoiceId; }
};
#endif