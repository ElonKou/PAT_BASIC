/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1037.在霍格沃茨找零钱.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Wed 06 Jan 2021 10:22:38 AM CST
================================================================*/

#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int g, s, k    = 0;
    int _g, _s, _k = 0;
    scanf("%d.%d.%d %d.%d.%d", &_g, &_s, &_k, &g, &s, &k);
    if (g > _g || (g == _g && s >= _s) || (g == _g && s == _s && k >= _k)) {
    } else {
        cout << "-";
        int temp = 0;
        temp     = g;
        g        = _g;
        _g       = temp;
        temp     = s;
        s        = _s;
        _s       = temp;
        temp     = k;
        k        = _k;
        _k       = temp;
    }

    int kk = k - _k;
    if (kk < 0) {
        kk += 29;
        s--;
    }
    int ss = s - _s;
    if (ss < 0) {
        ss += 17;
        g--;
    }
    int gg = g - _g;
    cout << gg << "." << ss << "." << kk << endl;
    return 0;
}
