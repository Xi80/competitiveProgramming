// URL: https://atcoder.jp/contests/abc165/submissions/12588685
// Date: Sat, 02 May 2020 21:15:39 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int x,cnt = 0;
    long long int m = 100;
    cin >> x;
    while(true){
        if(m >= x){
            cout << cnt << endl;
            return 0;
        }
        m *= 1.01;
        cnt++;
    }
}
