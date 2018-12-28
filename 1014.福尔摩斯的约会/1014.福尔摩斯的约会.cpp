//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1014.福尔摩斯的约会.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Fri 28 Dec 2018 07:48:10 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    // 有几个坑需要注意,第一个数要求在A-Z之间
    // 第二个数要求在0-9或者A-N之间
    // 第三个数要求a-z或者A-Z之间
    // 输出的小时数不足9的时候要写成09,分钟数同理
    string stra, strb, strc, strd;
    cin >> stra >> strb >> strc >> strd;
    int index = 0;
    int dateFirst = -1;
    int dateSecond = -1;
    int minsFirst = -1;
    for (; index < stra.size() && index < strb.size(); index++) {
        if (stra[index] == strb[index] && stra[index] >= 'A' &&
            stra[index] <= 'G') {
            dateFirst = index;
            break;
        }
    }
    for (index++; index < stra.size() && index < strb.size(); index++) {
        if (stra[index] == strb[index] &&
            ((stra[index] >= '0' && stra[index] <= '9') ||
             (stra[index] >= 'A' && stra[index] <= 'N'))) {
            dateSecond = index;
            break;
        }
    }

    for (int i = 0; i < strc.size() && i < strd.size(); i++) {
        if (strc[i] == strd[i] && minsFirst < 0 &&
            ((strc[i] >= 'a' && strc[i] <= 'z') ||
             (strc[i] >= 'A' && strc[i] <= 'Z'))) {
            minsFirst = i;
        }
    }
    switch (stra[dateFirst]) {
        case 'A':
            cout << "MON";
            break;
        case 'B':
            cout << "TUE";
            break;
        case 'C':
            cout << "WED";
            break;
        case 'D':
            cout << "THU";
            break;
        case 'E':
            cout << "FRI";
            break;
        case 'F':
            cout << "SAT";
            break;
        case 'G':
            cout << "SUN";
            break;
        default:
            break;
    }
    cout << " ";
    if (stra[dateSecond] >= 'A') {
        cout << stra[dateSecond] - 'A' + 10;
    } else {
        cout << '0' << stra[dateSecond];
    }
    cout << ":";
    if (minsFirst <= 9) {
        cout << '0';
    }
    cout << minsFirst;
    return 0;
}