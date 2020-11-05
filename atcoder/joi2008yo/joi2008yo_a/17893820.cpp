// URL: https://atcoder.jp/contests/joi2008yo/submissions/17893820
// Date: Thu, 05 Nov 2020 22:48:42 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a;
    int ans = 0;
    cin >> a;
    a = 1000 - a;
    while(a > 0){
        if(a >= 500){
            a -= 500;
        } else if(a >= 100){
            a -= 100;
        } else if(a >= 50){
            a -= 50;
        } else if(a >= 10){
            a -= 10;
        } else if(a >= 5) {
            a -= 5;
        } else {
            a--;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
