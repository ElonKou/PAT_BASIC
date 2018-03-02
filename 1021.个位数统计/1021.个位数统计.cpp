//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1021.个位数统计.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Fri 02 Mar 2018 11:23:42 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>

int main(){
	std::string num;
	int flag[10] = {0};
	std::cin >> num;
	int cnt = 0;
	for(int i = 0;i < num.length();i++){
		flag[num[i] - '0'] ++;
	}
	int index = 9;
	for(index = 9;index >= 0;index--){
		if(flag[index]!= 0){
			break;
		}
	}
	for(int i = 0;i < 10;i++){
		if(flag[i] != 0){
			std::cout << i << ":" << flag[i] ;
			if(i != index){
				std::cout << std::endl;
			}
		}
	}
    return 0;
}

