//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1016.部分A+B.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Sun 25 Feb 2018 11:59:14 AM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main(){
	string A,B;
	int Pa,Pb;
	int La = 0,Lb = 0;
	cin >> A >> Pa >> B >> Pb;
	for(int i = 0;i < A.length();i++){
		if(A[i] - '0' == Pa){
			La = 10 * La + Pa;
		}
	}
	for(int i = 0;i < B.length();i++){
		if(B[i] - '0' == Pb){
			Lb = 10 * Lb + Pb;
		}
	}
	cout << La + Lb;
	return 0;
}

