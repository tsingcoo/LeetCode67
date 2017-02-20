//
// Created by 王青龙 on 20/02/2017.
//

#include "solution.h"

std::string Solution::addBinary(std::string a, std::string b) {
    std::string s = "";
    int c = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    while (i >= 0 || j >= 0 || c == 1) {
        c += i >= 0 ? a[i--] - '0' : 0;
        c += j >= 0 ? b[j--] - '0' : 0;
        s = char(c % 2 + '0') + s;
        c /= 2;
    }
    return s;
}
