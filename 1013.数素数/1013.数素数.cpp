//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File   :1013.数素数.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Fri 28 Dec 2018 07:12:57 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    } else {
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    int primes[n + 1] = {0};
    int index = 0, cnt = 0;
    for (int i = 2; cnt <= n; i++) {
        if (isPrime(i)) {
            primes[index++] = i;
            cnt++;
        }
    }
    for (int i = m; i <= n; i++) {
        cout << primes[i - 1];
        if ((i - m+1) % 10 == 0) {
            cout << endl;
        } else if (i != n) {
            cout << " ";
        }
    }
    return 0;
}
