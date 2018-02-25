//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1011.A+B和C.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Sun 25 Feb 2018 11:39:02 AM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

int main(){
	int cnt;
	long long a,b,c;
	int caseNum = 0;
	cin >> cnt;
	bool result[cnt] = {false};
	while(cnt--){
		cin >> a >> b >> c;
		if(a + b > c){
			result[caseNum] = true;
		}
		caseNum ++;
	}
	for(int i = 0;i < caseNum;i++){
		cout << "Case #" << i+1 << ": ";
		if(result[i] == true){
			cout << "true";
		}else{
			cout << "false";
		}
		if(i != caseNum-1){
			cout << endl;
		}
	}
    return 0;
}

