//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1006.换个格式输出整数.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Thu 27 Dec 2018 05:53:07 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int B = num / 100;
    int S = num % 100 / 10;
    int N = num % 10;

    for (int i = 0; i < B; i++) {
        cout << 'B';
    }
    for (int i = 0; i < S; i++) {
        cout << 'S';
    }
    for (int i = 0; i < N; i++) {
        cout << i + 1;
    }

    return 0;
}
