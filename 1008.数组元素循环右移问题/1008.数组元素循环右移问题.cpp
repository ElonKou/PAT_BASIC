//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1008.数组元素循环右移问题.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Sun 25 Feb 2018 05:12:47 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main(){
	int n,cnt;
	cin >> n >> cnt;
	cnt = cnt % n;
	int A[n] = {0};
	int index = 0;
	for(int i = 0;i < n;i++){
		cin >> A[i];
	}
	for(int i = 0;i < n;i++){
		index = (i - cnt + n) % n;
		cout << A[index];
		if(i != n-1){
			cout << " ";
		}
	}
    return 0;
}

