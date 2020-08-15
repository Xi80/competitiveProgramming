// URL: https://atcoder.jp/contests/abc175/submissions/15946653
// Date: Sat, 15 Aug 2020 22:13:34 +0900
// Language: C++ (GCC 9.2.1)
#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long int n,k,d;
    cin >> n >> k >> d;
    long long int tmp = k;


    k = (abs(n) /  d > k)? 0 : k - (abs(n) /  d);
    n = (abs(n) /  d <= tmp)? abs(n) % d : abs(abs(n) - (d * tmp));

    if(k % 2 == 1){
        if(abs(n + d) > abs(n - d)){
            n = abs(n - d);
        } else {
            n = abs(n + d);
        }
    }
    cout << abs(n) << endl;
}
