//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1003.我要通过.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Thu 27 Dec 2018 03:39:41 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cnt;
    cin >> cnt;
    int result[cnt] = {0};
    string str;
    for (int i = 0; i < cnt; i++) {
        cin >> str;
        int P = -1;
        int A = -1;
        int T = -1;
        bool isValid = true;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == 'P') {
                P = j;
            } else if (str[j] == 'A') {
                A = j;
            } else if (str[j] == 'T') {
                T = j;
            } else {
                isValid = false;
                break;
            }
        }
        // 关于题目表述可能存在一些问题,也可能是我理解存在问题
        // 1.包含PAT三个字符.其余字符为空或者A
        // 2.P之前字符数量x,PT之间字符数量y,T之后字数数量z,满足条件x*y=z(反正我是未理解这个条件怎么体现在题目中的)
        if (isValid && P >= 0 && T >= 0 && P < T && A >= 0) {
            if (P * (T - P - 1) == (str.size() - T - 1)) {
                result[i] = 1;
            }
        }
    }

    for (int i = 0; i < cnt; i++) {
        if (result[i] == 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        if (i != cnt - 1) {
            cout << endl;
        }
    }

    return 0;
}
