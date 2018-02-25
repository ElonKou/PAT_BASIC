//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1046.划拳.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Sun 25 Feb 2018 05:02:50 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main(){
	int n,failA = 0,failB = 0;
	cin >> n;
	for(int i =0 ;i < n;i++){
		int a1,a2,b1,b2;
		cin >> a1 >> a2 >> b1 >> b2;
		if(a1 + b1 == a2 && a1 + b1 != b2){
			failB ++;
		}else if(a1 + b1 != a2 && a1 + b1 == b2){
			failA ++;
		}
	}
	cout << failA << " " << failB;
	return 0;
}
