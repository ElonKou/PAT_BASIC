//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1017.A除以B.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Fri 28 Dec 2018 11:19:54 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main() {
    string str;
    int B;
    cin >> str >> B;
    int data = 0;
    bool first = true;
    // 解决10以内的除法(被除数<除数)
    if (str.size() == 1 && str[0] - '0' < B) {
        cout << "0 " << str;
        return 0;
    }
    int i = 0;
    // 首先移动到被除数笔除数大的时候,不然首项出现0不好处理
    while (data < B) {
        data = data * 10;
        data += str[i++] - '0';
    }
    for (; i < str.size(); i++) {
        data = data * 10;
        data += str[i] - '0';
        if (data < B) {
            cout << '0';
        } else {
            cout << data / B;
            data = data % B;
        }
    }
    cout << " " << data;
    return 0;
}
