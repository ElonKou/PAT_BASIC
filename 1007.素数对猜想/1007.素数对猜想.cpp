//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1007.素数对猜想.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Fri 28 Dec 2018 05:12:31 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0 || num == 1) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int data[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    int cnt = 0;
    for (int i = 1; i < n - 1; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
