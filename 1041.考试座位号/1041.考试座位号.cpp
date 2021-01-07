/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1041.考试座位号.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Wed 06 Jan 2021 11:25:40 AM CST
================================================================*/

#include <iostream>
#include <string>

using namespace std;

typedef struct Item {
    string kaohao;
    int    shiji;
    int    kaoshi;
} Item;

int main(int argc, char* argv[]) {
    int n, m;
    cin >> n;
    Item stu[n];
    for (size_t i = 0; i < n; i++) {
        Item e;
        cin >> e.kaohao >> e.shiji >> e.kaoshi;
        stu[i] = e;
    }
    int x;
    cin >> m;
    for (size_t i = 0; i < m; i++) {
        cin >> x;
        for (size_t j = 0; j < n; j++) {
            if (stu[j].shiji == x) {
                cout << stu[j].kaohao << " " << stu[j].kaoshi;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
