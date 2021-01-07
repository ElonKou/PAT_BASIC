/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1084.外观数列.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Thu 07 Jan 2021 12:12:15 PM CST
================================================================*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    int    cnt;
    string str = "";
    string pat = "";
    cin >> str >> cnt;
    pat = str + "1";
    if (cnt == 1) {
        cout << str << endl;
    } else {
        str = pat;
        for (int i = 3; i <= cnt; i++) {
            char c = str[0];
            int  n = 1;
            pat    = "";
            for (size_t j = 1; j < str.size(); j++) {
                if (c == str[j]) {
                    n++;
                } else {
                    pat += string(1, c);
                    pat += to_string(n);
                    c = str[j];
                    n = 1;
                }
            }
            pat += string(1, c);
            pat += to_string(n);
            str = pat;
        }
        cout << pat << endl;
    }

    return 0;
}
