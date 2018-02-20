//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1032.挖掘机技术哪家强.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Tue 20 Feb 2018 02:41:03 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	int score[100001] = {0};
	int school,sco;
	for(int i = num;i>0;i--){
		cin >> school >> sco;
		score[school] += sco;
	}
	int maxSchool = 1,maxScore = score[1];
	while(num--){
		if(maxScore < score[num]){
			maxScore = score[num];
			maxSchool = num;
		}
	}
	cout << maxSchool<< " " << score[maxSchool];
    return 0;
}

