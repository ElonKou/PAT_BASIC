//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1023.组个最小数.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Sun 25 Feb 2018 09:51:19 AM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main(){
    int arr[10] = {0};
	int min  = 0;
	for(int i = 0;i < 10;i++){
		cin >> arr[i];
		if(min == 0 && arr[i] != 0 && i != 0){
			min = i;
		}
	}
	cout << min;
	arr[min] --;
	for(int i =0 ;i < 10;i++){
		for(int j = 0;j < arr[i] ;j++){
			cout << i;
		}
	}
	return 0;
}

