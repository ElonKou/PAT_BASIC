/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1077.互评成绩计算.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Wed 06 Jan 2021 01:59:21 PM CST
================================================================*/

#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n, all = 0;
    cin >> n >> all;
    int value[n][n] = {0};
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            cin >> value[i][j];
        }
    }
    for (size_t i = 0; i < n; i++) {
        int t   = value[i][0];
        int sum = 0;
        int cnt = 0;
        int min = all + 1;
        int max = -1;
        for (size_t j = 1; j < n; j++) {
            if (value[i][j] >= 0 && value[i][j] <= all) {
                cnt++;
                sum += value[i][j];
                if (value[i][j] < min) {
                    min = value[i][j];
                }
                if (value[i][j] > max) {
                    max = value[i][j];
                }
            }
        }
        cout << (t + (sum - min - max) / (cnt - 2) + 1) / 2 << endl;
    }
    return 0;
}
