/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1039.到底买不买.cpp
*  Author   : elonkou
*  Email    : elonkou@ktime.cc
*  Date     : Wed 06 Jan 2021 10:47:28 AM CST
================================================================*/

#include <iostream>
#include <string>

using namespace std;

int GetIndex(char c) {
    // coding "A-Z" "a-z" "0-9" to 0-61
    int index = 0;
    if (c >= '0' && c <= '9') {
        index = c - '0';
    } else if (c >= 'a' && c <= 'z') {
        index = (c - 'a') + 10;
    } else if (c >= 'A' && c <= 'Z') {
        index = (c - 'A') + 36;
    }
    return index;
}

int main(int argc, char* argv[]) {
    string str, pat;
    cin >> str >> pat;
    int flag_str[62] = {0};
    int flag_pat[62] = {0};
    for (int i = 0; i < pat.size(); i++) {
        flag_pat[GetIndex(pat[i])]++;
    }
    for (int i = 0; i < str.size(); i++) {
        flag_str[GetIndex(str[i])]++;
    }
    int remain = 0;
    int ok     = 1;
    for (int i = 0; i < 62; i++) {
        int c = flag_str[i] - flag_pat[i];
        if (c < 0) {
            ok = 0;
            break;
        }
    }
    for (int i = 0; i < 62; i++) {
        if (ok < 1) {
            int c = flag_pat[i] - flag_str[i];
            if (c > 0) {
                remain += c;
            }
        } else {
            int c = flag_str[i] - flag_pat[i];
            if (c > 0)
                remain += c;
        }
    }
    if (ok) {
        cout << "Yes " << remain;
    } else {
        cout << "No " << remain;
    }
    return 0;
}
