//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1018.锤子剪刀布.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Sun 25 Feb 2018 10:16:53 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int maxIndex(int arr[]){
	int max = arr[0];
	int index = 0;
	for(int i = 0;i < 3;i++){
		if(max < arr[i]){
			max = arr[i];
			index = i;
		}
		if(max == arr[i]){
			if((index == 1 && (i == 0 || i == 2)) || (index == 2 && i == 0)){
				index = i;
				max = arr[i];
			}
		}
	}
	if(index == 0){
		cout << "B";
	}else if(index == 1){
		cout << "J";
	}else{
		cout << "C";
	}
}

int main(){
	int cnt;
	cin >> cnt;
	int arr[cnt][2] = {0};
	int win_list[2][4] = {0};
	int ping = 0;
	char a,b;
	for(int i = 0;i < cnt;i++){
		cin >> a >> b;
		if(a == 'B'){
			arr[i][0] = 0;
		}else if(a == 'J'){
			arr[i][0] = 1;
		}else{
			arr[i][0] = 2;
		}
		if(b == 'B'){
			arr[i][1] = 0;
		}else if(b == 'J'){
			arr[i][1] = 1;
		}else{
			arr[i][1] = 2;
		}
		if(arr[i][0] == arr[i][1]){
			ping ++;
		}
		if(arr[i][0] == (arr[i][1]+1) % 3){
			win_list[0][arr[i][0]] ++;
			win_list[0][3] ++;
		}
		if(arr[i][1] == (arr[i][0]+1) % 3){
			win_list[1][arr[i][1]] ++;
			win_list[1][3] ++;
		}
	}
	cout << win_list[0][3] << " " << ping << " " << cnt - win_list[0][3] - ping << endl;
	cout << win_list[1][3] << " " << ping << " " << cnt - win_list[1][3] - ping << endl;
	maxIndex(win_list[0]);
	cout << " ";
	maxIndex(win_list[1]);
	return 0;
}

