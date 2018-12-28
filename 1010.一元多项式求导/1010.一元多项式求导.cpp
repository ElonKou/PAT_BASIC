//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1010.一元多项式求导.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Fri 28 Dec 2018 05:28:42 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main() {
    int exps[1001] = {0};  //所有的指数
    int coe = 0;
    int exp = 0;
    while (cin >> coe >> exp) {
        // cout << coe << exp << endl;
        if (exp != 0) {
            coe *= exp;
            exp--;
            exps[exp] = coe;
        }
    }
    bool first = true;
    for (int i = 1000; i >= 0; i--) {
        if (exps[i] != 0) {
            if (!first) {
                cout << " ";
            }
            cout << exps[i] << " " << i;
            first = false;
        }
    }
    if (first) {
        cout << "0 0";
    }
    return 0;
}
