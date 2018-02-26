//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File:  1012.数字分类_2.cpp
// Author :elonkou
// E-mail :elonkou@ktime.cc
// Date   :Sun 25 Feb 2018 09:49:57 PM CST
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int count[5] = {0};
	int ans[5] = {0};
	int n,temp;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> temp;
		if(temp % 5 == 0){
			if(temp % 2 == 0){
				ans[0] += temp;
				count[0] ++;
			}
		}else if(temp % 5 == 1){
			if(count[1] % 2 == 0){
				ans[1] += temp;
			}else{
				ans[1] -= temp;
			}
			count[1] ++;
		}else if(temp % 5 == 2){
			count[2] ++; 
		}else if(temp % 5 == 3){
			ans[3] += temp;
			count[3] ++;
		}else{
			if(temp > ans[4]){
				ans[4] = temp;
			}
			count[4] ++;
		}
	}
	if(count[0] == 0){
		cout << "N ";
	}else{
		cout << ans[0] << " ";
	}
	if(count[1] == 0){
		cout << "N ";
	}else{
		cout << ans[1] << " ";
	}
	if(count[2] == 0){
		cout << "N ";
	}else{
		cout << count[2] << " ";
	}
	if(count[3] == 0){
		cout << "N ";
	}else{
		cout << setiosflags(ios::fixed) << setprecision(1);
		cout << ans[3] * 1.0 / count[3] << " ";
	}
	if(count[4] == 0){
		cout << "N";
	}else{
		cout << ans[4];
	}
    return 0;
}

