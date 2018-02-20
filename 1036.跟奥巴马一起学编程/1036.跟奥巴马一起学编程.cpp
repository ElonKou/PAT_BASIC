//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1036.跟奥巴马一起学编程.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Tue 20 Feb 2018 02:53:15 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main(){
	int num;
	char c;

	cin >> num >> c;
	for(int i = 0;i < num;i++){
		cout << c;
	}
	cout << endl;

	for(int i = (num + 1)/2 - 2;i > 0;i--){
		cout << c;
		for(int j = 0;j < num-2;j++){
			cout << " ";
		}
		cout << c << endl;
	}
	//
	for(int i = 0;i < num;i++){
		cout << c;
	}
	cout << endl;

    return 0;
}

