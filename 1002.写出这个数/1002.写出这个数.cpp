//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1002.写出这个数.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Thu 18 Jan 2018 09:57:08 AM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <sstream>
#include <string>

#define LIST_SIZE = 10;

using namespace std;


int countSum(string data){
	int index = data.length()-1;
	int count = 0;
	while(index >= 0){
		count += (data[index--] -'0');
	}
	return count;
}

void printSum(int sum,const char * pinyin[]){
	stringstream ss;
	ss << sum;
	string str = ss.str();
	int len = str.length();

	int index = 0;
	int num = 0;
	cout << pinyin[str[index]-'0'];
	while(++index < len){
		num = str[index]-'0';
		cout << " " << pinyin[num];
	}
}

int main(){
	const char* pinyin[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	string data;
	cin >> data;
    int sum = countSum(data);
	printSum(sum,pinyin);
	return 0;
}

