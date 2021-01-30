/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1089.狼人杀-简单版.cpp
*  Author   : pop
*  Email    : elonkou@ktime.cc
*  Date     : Sat 09 Jan 2021 04:47:20 PM CST
================================================================*/

#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    int x[n][n] = {0};
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            x[i][j] = 0;
        }
        string c;
        cin >> c;
        if (c[0] == '+') {
            x[i][c[1] - '1'] = 1;
        } else {
            x[i][c[1] - '1'] = -1;
        }
    }
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
