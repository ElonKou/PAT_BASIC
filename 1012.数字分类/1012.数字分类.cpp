//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1012.数字分类.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Sun 25 Feb 2018 05:28:15 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
	int cnt;
	cin >> cnt;
	int number[6][cnt] = {0};
	for(int i =0 ;i < cnt;i++){
		cin >> number[0][i];
		if(number[0][i] % 10 == 0){
			number[1][i] = 1;
		}
		if(number[0][i] % 5 == 1){
			number[2][i] = 1;
		}
		if(number[0][i] % 5 == 2){
			number[3][i] = 1;
		}
		if(number[0][i] % 5 == 3){
			number[4][i] = 1;
		}
		if(number[0][i] % 5 == 4){
			number[5][i] = 1;
		}
	}
	int a1_sum = 0;
	int a1_cnt = 0;
	int a2_cnt = 0;
	int a2_sum = 0;
	int a3_cnt = 0;
	int a4_sum = 0;
	int a4_cnt = 0;
	int a5_max = 0;
	int a5_cnt = 0;
	for(int i = 0;i < cnt;i++){
		if(number[1][i] == 1){
			a1_cnt ++;
			a1_sum += number[0][i];
		}
		if(number[2][i] == 1){
			a2_sum += pow(-1,a2_cnt) * number[0][i];
			a2_cnt ++;
		}
		if(number[3][i] == 1){
			a3_cnt ++;
		}
		if(number[4][i] == 1){
			a4_sum += number[0][i];
			a4_cnt ++;
		}
		if(number[5][i] == 1){
			a5_max = max(a5_max,number[0][i]);
			a5_cnt ++;
		}
	}
	if(a1_cnt == 0){
		cout << "N ";
	}else{
		cout << a1_sum << " ";
	}
	if(a2_cnt == 0){
		cout << "N ";
	}else{
		cout << a2_sum << " ";
	}
	if(a3_cnt == 0){
		cout << "N ";
	}else{
		cout << a3_cnt << " ";
	}
	if(a4_cnt == 0){
		cout << "N ";
	}else{
		cout << setiosflags(ios::fixed) << setprecision(1);
		cout << a4_sum * 1.0 / a4_cnt << " ";
	}
	if(a5_cnt == 0){
		cout << "N";
	}else{
		cout << a5_max;
	}
    return 0;
}

