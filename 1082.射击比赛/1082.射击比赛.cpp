/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1082.射击比赛.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Thu 07 Jan 2021 11:20:46 AM CST
================================================================*/

#include <iostream>
#include <string>

using namespace std;

typedef struct Item {
    string ID;
    int    x;
    int    y;
    Item(){};
    Item(string s, int x_, int y_)
        : ID(s)
        , x(x_)
        , y(y_) {}
    ~Item() {}
} Item;

int main(int argc, char* argv[]) {
    int  cnt;
    Item min("iiii", 101, 101);
    Item max("mmmm", 0, 0);
    cin >> cnt;
    for (size_t i = 0; i < cnt; i++) {
        Item temp;
        cin >> temp.ID >> temp.x >> temp.y;
        if ((temp.x * temp.x + temp.y * temp.y) < (min.x * min.x + min.y * min.y)) {
            min = temp;
        }
        if ((temp.x * temp.x + temp.y * temp.y) > (max.x * max.x + max.y * max.y)) {
            max = temp;
        }
    }
    cout << min.ID << " " << max.ID << endl;
    return 0;
}
