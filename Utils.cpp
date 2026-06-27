#include "Utils.h"

string Utils::toUpper(string s) {
    for (int i = 0; i < (int)s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
    return s;
}

bool Utils::isValidAge(int age) {
    return age > 0 && age < 120;
}