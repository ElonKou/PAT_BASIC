/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1095.解码PAT准考证.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Mon 01 Mar 2021 10:12:26 PM CST
================================================================*/

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct Item {
    char   type;
    int    kaochang;
    int    date;
    int    num;
    int    score;
    string ID;
} Item;

typedef struct Cmd {
    int    mode;
    string para;
} Cmd;

typedef struct Item3 {
    int kc;
    int cnt;
} Item3;

bool cmp1(Item x, Item y) {
    if (x.score == y.score) {
        return x.ID < y.ID;
    } else {
        return x.score > y.score;
    }
}

bool cmp3(Item3 x, Item3 y) {
    if (x.cnt == y.cnt) {
        return x.kc < y.kc;
    } else {
        return x.cnt > y.cnt;
    }
}

void Sort(vector<Item> stus, char para) {
    cout << "1 " << para << endl;
    vector<Item> xx;
    for (size_t i = 0; i < stus.size(); i++) {
        if (stus[i].type == para) {
            // cout << stus[i].ID << " " << stus[i].score << endl;
            xx.push_back(stus[i]);
        }
    }
    if (xx.size() > 0) {
        stable_sort(xx.begin(), xx.end(), cmp1);
        for (size_t i = 0; i < xx.size(); i++) {
            cout << xx[i].ID << " " << xx[i].score << endl;
        }
    } else {
        cout << "NA" << endl;
    }
}

void OutputSum(vector<Item> stus, int kaochang) {
    cout << "2 " << kaochang << endl;
    int cnt = 0;
    int sum = 0;
    for (size_t i = 0; i < stus.size(); i++) {
        if (stus[i].kaochang == kaochang) {
            cnt++;
            sum += stus[i].score;
        }
    }
    if (cnt > 0) {
        cout << cnt << " " << sum << endl;
    } else {
        cout << "NA" << endl;
    }
}

void OutputScore(vector<Item> stus, int date) {
    cout << "3 " << date << endl;
    vector<Item3> res;
    for (size_t i = 0; i < stus.size(); i++) {
        if (stus[i].date == date) {
            if (res.size() == 0) {
                Item3 it;
                it.cnt = 1;
                it.kc  = stus[0].kaochang;
                res.push_back(it);
            } else {
                int  index = 0;
                bool found = false;
                for (size_t j = 0; j < res.size(); j++) {
                    if (res[j].kc == stus[i].kaochang) {
                        found = true;
                        index = j;
                        break;
                    }
                }
                if (!found) {
                    Item3 ic;
                    ic.cnt = 1;
                    ic.kc  = stus[i].kaochang;
                    res.push_back(ic);
                } else {
                    res[index].cnt++;
                }
            }
        }
    }
    if (res.size() > 0) {
        stable_sort(res.begin(), res.end(), cmp3);
        for (size_t i = 0; i < res.size(); i++) {
            cout << res[i].kc << " " << res[i].cnt << endl;
        }
    } else {
        cout << "NA" << endl;
    }
}

int main(int argc, char* argv[]) {
    int          icnt, ccnt;
    vector<Item> stus;
    vector<Cmd>  cmds;
    cin >> icnt >> ccnt;
    for (size_t i = 0; i < icnt; i++) {
        Item it;
        cin >> it.ID;
        it.type     = it.ID[0];
        it.kaochang = stoi(it.ID.substr(1, 3));
        it.date     = stoi(it.ID.substr(4, 6));
        it.num      = stoi(it.ID.substr(10, 3));
        cin >> it.score;
        stus.push_back(it);
    }
    for (size_t i = 0; i < ccnt; i++) {
        Cmd ct;
        cin >> ct.mode >> ct.para;
        cmds.push_back(ct);
    }
    // for (size_t i = 0; i < icnt; i++) {
    //     cout << stus[i].type << " " << stus[i].kaochang << " " << stus[i].date << " " << stus[i].num << " " << stus[i].score << endl;
    //     // cout << stus[i].ID << endl;
    // }
    for (size_t i = 0; i < ccnt; i++) {
        cout << "Case " << i + 1 << ": ";
        if (cmds[i].mode == 1) {
            Sort(stus, cmds[i].para[0]);
        } else if (cmds[i].mode == 2) {
            OutputSum(stus, stoi(cmds[i].para));
        } else {
            OutputScore(stus, stoi(cmds[i].para));
        }
    }

    return 0;
}
