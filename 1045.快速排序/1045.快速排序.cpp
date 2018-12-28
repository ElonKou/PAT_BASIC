//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1045.快速排序.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Mon 26 Mar 2018 10:49:40 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(int a, int b) {
    return a < b;
}
int main() {
    int cnt = 0;
    cin >> cnt;
    int data[cnt] = {0};
    int duplicate[cnt] = {0};
    int max = 0;
    std::vector<int> v;
    for (int i = 0; i < cnt; i++) {
        cin >> data[i];
        duplicate[i] = data[i];
    }
    sort(duplicate, duplicate + cnt);

    for (int i = 0; i < cnt; i++) {
        // 使用max是因为防止某些数字在duplicate和data数据的顺序一直,但不是所求数据
        if (duplicate[i] == data[i] && data[i] > max) {
            v.push_back(data[i]);
        }
        max = max < data[i] ? data[i] : max;
    }
    cout << v.size() << endl;
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) {
            cout << " ";
        }
    }
    // 这个非常坑,不然有一个测试点不能通过
    cout << endl;
    return 0;
}