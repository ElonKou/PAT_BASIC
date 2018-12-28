//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1015.德才论.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Fri 28 Dec 2018 09:32:42 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
typedef struct Student {
    int number;
    int moral;
    int ablility;
    // 0:德才兼备 圣人
    // 1:德>才 君子
    // 2:德>才,而且两者都<H,愚人
    // 3:其他考生
} stu;

bool cmp(stu a, stu b) {
    if (a.moral + a.ablility != b.moral + b.ablility) {
        return (a.moral + a.ablility) > (b.moral + b.ablility);
    } else if (a.moral != b.moral) {
        return a.moral > b.moral;
    } else {
        return a.number < b.number;
    }
}
int main() {
    int cnt = 0;
    int L = 0, H = 0;
    int total = 0;
    cin >> cnt >> L >> H;
    stu t = {0, 0, 0};
    std::vector<stu> stus[4];
    for (int i = 0; i < cnt; i++) {
        // 这个地方如果使用c++的IO可能会超时，但是使用Ｃ语言的就不会(-_-||满头大汉)
        // 而且使用c语言时间约为c++的时间的三分之一
        // cin >> t.number >> t.moral >> t.ablility;
        scanf("%d %d %d", &t.number, &t.moral, &t.ablility);
        if (t.moral >= H && t.ablility >= H) {
            stus[0].push_back(t);
            total++;
        } else if (t.moral >= H && t.ablility < H && t.ablility >= L) {
            stus[1].push_back(t);
            total++;
        } else if (t.moral < H && t.moral >= L && t.ablility < H &&
                   t.ablility >= L && t.moral >= t.ablility) {
            stus[2].push_back(t);
            total++;
        } else if (t.moral >= L && t.ablility >= L) {
            stus[3].push_back(t);
            total++;
        }
    }
    cout << total << endl;
    for (unsigned int i = 0; i < 4; i++) {
        sort(stus[i].begin(), stus[i].end(), cmp);
        for (int j = 0; j < stus[i].size(); j++) {
            cout << stus[i][j].number << " " << stus[i][j].moral << " "
                 << stus[i][j].ablility << endl;
        }
    }

    return 0;
}
