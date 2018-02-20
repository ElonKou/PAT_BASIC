//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1022.D进制的A+B.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Tue 20 Feb 2018 03:29:11 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main(){
	long long a,b,d;
	cin >> a >> b >> d;
	long long sum = a+b;
	int result[31];
	int index = 0;
	if(sum == 0){
		cout << 0;
	}
	while(sum != 0){
		result[index++] = sum % d;
		sum /= d;
	}
	while(index--){
		cout << result[index];
	}
    return 0;
}

