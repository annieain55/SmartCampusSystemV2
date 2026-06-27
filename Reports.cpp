#include "Reports.h"
#include <iostream>
using namespace std;

void Reports::sortByGpa(Student* arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j]->getGpa() < arr[j + 1]->getGpa()) {
                Student* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}