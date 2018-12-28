//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1056.组合数的和.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Fri 28 Dec 2018 04:48:22 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main() {
    int cnt;
    cin >> cnt;
    int data[cnt] = {0};
    int result = 0;
    int sum = 0;
    for (int i = 0; i < cnt; i++) {
        cin >> data[i];
        sum += data[i];
    }
    sum *= cnt - 1;
    result += sum;
    result += sum * 10;
    cout << result;
    return 0;
}
