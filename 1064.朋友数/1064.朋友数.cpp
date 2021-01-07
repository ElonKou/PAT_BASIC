/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1064.朋友数.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Wed 06 Jan 2021 12:58:50 PM CST
================================================================*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    string x;
    int    n        = 0;
    int    flag[40] = {0};
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> x;
        int num = 0;
        for (size_t i = 0; i < x.size(); i++) {
            num += x[i] - '0';
        }
        flag[num]++;
    }
    int num = 0;
    for (size_t i = 0; i < 40; i++) {
        if (flag[i] > 0) {
            num++;
        }
    }
    cout << num << endl;
    for (size_t i = 0; i < 40; i++) {
        if (flag[i] > 0) {
            num--;
            cout << i;
            if (num) {
                cout << " ";
            }
        }
    }

    return 0;
}
