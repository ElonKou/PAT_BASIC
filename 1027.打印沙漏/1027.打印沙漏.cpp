/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1027.打印沙漏.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Mon 04 Jan 2021 06:19:55 PM CST
================================================================*/

#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int  n, line;
    char c;
    cin >> n >> c;
    line = (n + 1) / 2;
    line = pow(line, 0.5);
    for (int i = 0; i < line * 2 - 1; i++) {
        if (i < line) {
            for (int k = 0; k < i; k++) {
                cout << " ";
            }
            for (int k = i; k < line * 2 - 1 - i; k++) {
                cout << c;
            }
            cout << endl;
        } else {
            int cnt = i - line + 1;
            for (int k = 0; k < line - cnt - 1; k++) {
                cout << " ";
            }
            for (int k = 0; k < cnt * 2 + 1; k++) {
                cout << c;
            }
            cout << endl;
        }
    }
    cout << n - line * line * 2 + 1;
    return 0;
}
