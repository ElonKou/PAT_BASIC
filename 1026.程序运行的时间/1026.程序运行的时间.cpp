//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1026.程序运行的时间.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Sun 25 Feb 2018 03:39:34 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int start,end;
	cin >> start >> end;
	int time = round((end-start)*1.0/100);
    int hour = time / 3600;
	time  = time % 3600;
	int mins = time /60;
	time = time % 60;
	int seconds = time;
	cout << setw(2)<< setfill('0')<< hour << ":" 
		 << setw(2)<< setfill('0')<< mins << ":"
		 << setw(2)<< setfill('0')<< seconds;
	return 0;
}

