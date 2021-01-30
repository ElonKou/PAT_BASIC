/*================================================================
*  Copyright (C)2020 All rights reserved.
*  FileName : 1091.N-自守数.cpp
*  Author   : pop
*  Email    : elonkou@ktime.cc
*  Date     : Sat 16 Jan 2021 08:44:28 PM CST
================================================================*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        // detect whether it is n-num.
        int flag = 0;
        for (int i = 0; i < 10; i++)
        {
            long x = arr[j] * arr[j] * i;
            // cout<< arr[j] << "-" << i+1 << ": " << x << endl;
            if(arr[j]<10){
                if(x%10 == arr[j]){
                    cout << i << " " << x << endl;
                    flag = 1;
                    break;
                }
            }else if(arr[j] < 100)
            {
                if(x % 100 == arr[j]){
                    cout << i << " " << x << endl;
                    flag = 1;
                    break;
                }
            }else if(arr[j] < 1000)
            {
                if(x % 1000 == arr[j]){
                    cout << i << " " << x << endl;
                    flag = 1;
                    break;
                }
            }
            
        }
        if(flag == 0){
            cout << "No" << endl;
        }
    }
    return 0;
}
