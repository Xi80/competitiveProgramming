// URL: https://atcoder.jp/contests/abc164/submissions/12347377
// Date: Sun, 26 Apr 2020 21:05:48 +0900
// Language: C++ (GCC 9.2.1)
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	while(true){
		if(a > 0){
			c -= b;
		} else {
			cout << "No" << endl;
			return 0;
		}
		if(c > 0){
			a -= d;
		} else {
			cout << "Yes" << endl;
			return 0;
		}
	}
}
