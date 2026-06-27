#include "FeeRecord.h"

FeeRecord::FeeRecord(string sref, float sf, float hf, float lf)
    : studentRef(sref), semFee(sf), hostelFee(hf), libFine(lf), totalPaid(0) {
    balance = semFee + hostelFee + libFine;
}

FeeRecord::FeeRecord(const FeeRecord& other) {
    studentRef = other.studentRef;
    semFee = other.semFee;
    hostelFee = other.hostelFee;
    libFine = other.libFine;
    totalPaid = other.totalPaid;
    balance = other.balance;
}

FeeRecord& FeeRecord::operator=(const FeeRecord& other) {
    if (this != &other) {
        studentRef = other.studentRef;
        semFee = other.semFee;
        hostelFee = other.hostelFee;
        libFine = other.libFine;
        totalPaid = other.totalPaid;
        balance = other.balance;
    }
    return *this;
}

void FeeRecord::operator-=(float amount) {
    totalPaid += amount;
    balance -= amount;
}