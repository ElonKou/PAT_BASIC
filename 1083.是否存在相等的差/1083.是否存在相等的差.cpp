/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1083.是否存在相等的差.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Thu 07 Jan 2021 11:34:58 AM CST
================================================================*/

#include <iostream>
#define ABS(x) ((x >= 0) ? (x) : (-x))

using namespace std;

int main(int argc, char* argv[]) {
    int cnt = 0;
    cin >> cnt;
    int flag[cnt] = {0};
    int x         = 0;
    for (int i = 0; i < cnt; i++) {
        cin >> x;
        x = i + 1 - x;
        flag[ABS(x)]++;
    }
    for (int i = cnt - 1; i >= 0; i--) {
        if (flag[i] > 1) {
            cout << i << " " << flag[i] << endl;
        }
    }
    return 0;
}
