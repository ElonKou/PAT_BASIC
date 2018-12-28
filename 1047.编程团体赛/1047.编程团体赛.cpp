//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1047.编程团体赛.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Fri 28 Dec 2018 04:18:39 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    scanf("%d", &cnt);
    int scores[1001] = {0};

    for (int i = 0; i < cnt; i++) {
        int seq = 0;     //队号
        int member = 0;  //队内成员号码
        int score = 0;   //队员号码
        scanf("%d-%d %d", &seq, &member, &score);
        scores[seq] += score;
    }
    int index = 0;
    int max = scores[index];

    for (int i = 0; i < 1001; i++) {
        if (scores[i] != 0 && scores[i] > max) {
            max = scores[i];
            index = i;
        }
    }
    cout << index << " " << max;
    return 0;
}
