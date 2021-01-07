/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1070.结绳.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Wed 06 Jan 2021 01:13:53 PM CST
================================================================*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    int         n;
    vector<int> data;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        int x;
        cin >> x;
        data.push_back(x);
    }
    if (n == 1) {
        cout << data[0];
        return 0;
    }
    sort(data.begin(), data.end());
    int x = data[0];
    for (size_t i = 1; i < n; i++) {
        x = (x + data[i]) / 2;
    }
    cout << x;
    return 0;
}