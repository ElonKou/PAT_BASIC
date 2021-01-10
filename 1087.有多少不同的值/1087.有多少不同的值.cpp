/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1087.有多少不同的值.cpp
*  Author   : pop
*  Email    : elonkou@ktime.cc
*  Date     : Sat 09 Jan 2021 04:39:37 PM CST
================================================================*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int n = 0;
    int cnt = 0;
    int last = -1;
    cin  >> n;
    for (size_t i = 1; i <= n; i++)
    {
        int temp = i / 2 + i / 3 + i / 5;
        if(temp != last){
            last = temp;
            cnt ++;
        }
    }
    cout  << cnt << endl;
    
    return 0;
}
