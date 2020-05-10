// URL: https://atcoder.jp/contests/abc167/submissions/13051303
// Date: Sun, 10 May 2020 21:26:06 +0900
// Language: C++ (GCC 9.2.1)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
    long long int a,b,c,k;
    cin >> a >> b >> c >> k;
    long long int ans = 0;
    if(k <= a){
        ans = k;
    } else{
        ans += a;
        k -= a;
        if(k <= b){

        } else {
            k -= b;
            ans -= k;
        }
    }
    cout << ans << endl;
}
