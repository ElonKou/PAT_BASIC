//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1036.跟奥巴马一起学编程.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Tue 20 Feb 2018 02:53:15 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main(){
	int width;
	char c;
	cin >> width >> c;
	int height = (width + 1)/2;
	for(int i = 0;i < height;i++){
		for(int j = 0;j < width;j++){
			if(i ==0 || i == height-1 || j == 0 ||j == width-1){
				cout << c;
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
    return 0;
}

