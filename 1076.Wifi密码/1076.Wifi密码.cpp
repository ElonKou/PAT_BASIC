//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1076.Wifi密码.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Fri 28 Dec 2018 04:10:14 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main() {
    int cnt;
    cin >> cnt;
    int result[cnt] = {0};
    for (int i = 0; i < cnt; i++) {
        string str;
        for (int j = 0; j < 4; j++) {
            cin >> str;
            if (str[2] == 'T') {
                result[i] = str[0] - 'A' + 1;
            }
        }
    }

    for (int i = 0; i < cnt; i++) {
        cout << result[i];
    }

    return 0;
}
