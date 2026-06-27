#ifndef FEERECORD_H
#define FEERECORD_H
#include <string>
using namespace std;

class FeeRecord {
private:
    string studentRef;
    float semFee;
    float hostelFee;
    float libFine;
    float totalPaid;
    float balance;
public:
    FeeRecord(string sref, float sf, float hf, float lf);
    FeeRecord(const FeeRecord& other);
    FeeRecord& operator=(const FeeRecord& other);
    void operator-=(float amount);
    float getBalance() const { return balance; }
};
#endif
