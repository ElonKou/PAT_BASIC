//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1001.害死人不偿命的3n+1猜想.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Thu 18 Jan 2018 09:49:03 AM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int countSteps(int data){
	// 计算需要进行的次数
	// int data:	传入的数据
	// return step:	返回计算得到的步骤数量
	int step = 0;
	while(data != 1){
		if(data%2==0){
			data = data/2;
			step ++;
		}else{
			data = (data*3+1)/2;
			step++;
		}
	}
	return step;
}

int main(){
	// 统计3n+1中到达1需要进行分割的次数
	int data;
	cin >> data;
	int step = countSteps(data);	// 调用子函数进行计算
    cout << step;
    return 0;
}

