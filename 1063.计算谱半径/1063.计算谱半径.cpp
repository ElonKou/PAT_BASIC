/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1063.计算谱半径.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Wed 06 Jan 2021 12:27:22 PM CST
================================================================*/

#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int   x, y, n;
    float c, max;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> x >> y;
        c = sqrt(x * x + y * y);
        if (c > max) {
            max = c;
        }
    }
    printf("%.2f", max);
    return 0;
}
