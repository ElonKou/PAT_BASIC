//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1009.说反话.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Tue 20 Feb 2018 04:05:57 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main(){
	string str[80];
	int index = 0;
    while((cin.peek() != EOF) && (cin.peek() != '\n')){
		cin >> str[index++];
	}
	while(index != 0){
		cout << str[--index];
		if(index != 0){
			cout << " ";
		}
	}
	return 0;
}

