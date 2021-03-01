/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1089.狼人杀-简单版.cpp
*  Author   : pop
*  Email    : elonkou@ktime.cc
*  Date     : Sat 09 Jan 2021 04:47:20 PM CST
================================================================*/

#include <iostream>

using namespace std;

bool islie(int* x, int i, int j, int c) {
    // when i, j is wolf, judge whether c is lying.
    int v = x[c];
    if (v > 0) { // C think it's a good man.
        v--;
        if (v != i && v != j) {
            return false;
        } else {
            return true;
        }

    } else if (x[c] < 0) {
        v = -(v + 1);
        // C think it's a wolf
        if (v == i || v == j) {
            return false;
        } else {
            return true;
        }
    }
}

int main(int argc, char* argv[]) {
    int n = 0;
    cin >> n;
    int x[n] = {0};
    for (size_t i = 0; i < n; i++) {
        cin >> x[i];
    }
    // decide
    int cnt = 0;
    for (size_t i = 0; i < n; i++) {
        for (size_t j = i + 1; j < n; j++) {
            // if i, j = wolf
            // then count the number
            int jia   = 0;
            int w_jia = 0;
            // decide thether all the wolf lie
            for (size_t k = 0; k < n; k++) {
                bool res = islie(x, i, j, k);
                if (res) {
                    jia++;
                    if (k == i || k == j) {
                        w_jia++;
                    }
                }
            }
            // result
            if (jia == 2 && w_jia == 1) {
                cnt++;
                cout << (i + 1) << " " << (j + 1) << endl;
                return 0;
            }
        }
    }
    if (cnt == 0) {
        cout << "No Solution" << endl;
    }
    return 0;
}
