//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1061.判断题.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Fri 28 Dec 2018 04:37:42 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int result[n] = {0};
    int answer[m] = {0};
    int value[m] = {0};
    for (int i = 0; i < m; i++) {
        cin >> value[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> answer[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int temp = 0;
            cin >> temp;
            if (temp == answer[j]) {
                result[i] += value[j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << result[i];
        if (i != n - 1) {
            cout << endl;
        }
    }
    return 0;
}
