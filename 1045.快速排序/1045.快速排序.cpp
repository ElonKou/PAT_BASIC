//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1045.快速排序.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Mon 26 Mar 2018 10:49:40 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main(){
	int cnt = 0;
	cin >> cnt;
	int arr[cnt] = {0};
	int tag[cnt] = {0};
	for(int i =0;i < cnt ; i++){
		cin >> arr[i];
	}
	int num = 0;
	int temp = 0;
	for(int i =0;i < cnt ; i++){
		for(int j = 0;j < cnt ; j++){
			if((arr[i] >= arr[j] && i < j) || (arr[i] <= arr[j] && i > j)){
				tag[i] = 1;
				num ++;
				break;
			}else{
				temp = arr[i];
			}
		}
	}
	cout << cnt - num << endl;
	for(int i = 0;i < cnt ; i++){
		if(tag[i] != 1){
			cout << arr[i];
			if(arr[i] != temp){
				cout << " ";
			}
		}
	}
    return 0;
}

