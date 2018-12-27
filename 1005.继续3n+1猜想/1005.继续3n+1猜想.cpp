//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1005.继续3n+1猜想.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Thu 27 Dec 2018 07:10:02 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int cnt;
    cin >> cnt;
    std::vector<int> data(cnt);
    for (int i = 0; i < cnt; i++) {
        cin >> data[i];
    }
    int flag[10000] = {0};
    for (int i = 0; i < cnt; i++) {
        int num = data[i];
        while (num != 1) {
            if (num % 2 != 0) {
                num = num * 3 + 1;
            }
            num = num / 2;
            if (flag[num] == 1) {
                break;
            }
            flag[num] = 1;
        }
    }
    std::vector<int> v;
    for (int i = 0; i < cnt; i++) {
        if (flag[data[i]] != 1) {
            v.push_back(data[i]);
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (unsigned int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) {
            cout << " ";
        }
    }
    return 0;
}
