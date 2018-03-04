//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1004.成绩排名.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Sat 03 Mar 2018 11:39:02 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <algorithm>

using namespace std;

struct stu{
	string name;
	string course;
	int score;
};

int cmp(stu a,stu b){
	return a.score > b.score;
}

int main(){
	int cnt;
	cin >> cnt;
	stu stus[cnt];
	for(int i = 0 ;i < cnt;i++){
		cin >> stus[i].name
			>> stus[i].course
			>> stus[i].score;
	}
	sort(stus,stus + cnt,cmp);
	cout << stus[0].name << " "
		 << stus[0].course << endl
		 << stus[cnt - 1].name << " "
		 << stus[cnt - 1].course;
	return 0;
}

