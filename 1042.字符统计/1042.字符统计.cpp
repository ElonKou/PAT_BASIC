/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1042.字符统计.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Wed 06 Jan 2021 12:33:57 PM CST
================================================================*/

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    string   str;
    unsigned flag[26] = {0};
    getline(cin, str);
    for (size_t i = 0; i < str.size(); i++) {
        size_t c = 0;
        if (str[i] >= 'A' && str[i] <= 'Z') {
            c = str[i] - 'A';
            flag[c]++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            c = str[i] - 'a';
            flag[c]++;
        }
    }
    int max   = 0;
    int index = 0;
    for (size_t i = 0; i < 26; i++) {
        if (flag[i] > max) {
            max   = flag[i];
            index = i;
        }
    }
    cout << char('a' + index) << " " << max;
    return 0;
}
