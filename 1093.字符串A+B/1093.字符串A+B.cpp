/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1093.字符串A+B.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Mon 01 Mar 2021 09:28:31 PM CST
================================================================*/

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    vector<char> res;
    map<char, bool> flag;
    for (size_t i = 0; i < a.size(); i++) {
        auto x = flag.find(a[i]);
        if (!x->second) {
            flag[a[i]] = true;
            res.push_back(a[i]);
        }
    }
    for (size_t i = 0; i < b.size(); i++) {
        auto x = flag.find(b[i]);
        if (!x->second) {
            flag[b[i]] = true;
            res.push_back(b[i]);
        }
    }

    for (auto it = res.begin(); it != res.end(); it++) {
        cout << *it;
    }

    return 0;
}
