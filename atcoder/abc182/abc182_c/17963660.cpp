// URL: https://atcoder.jp/contests/abc182/submissions/17963660
// Date: Sun, 08 Nov 2020 21:17:12 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int (i) = 0; i < (int)(n); (i)++)
#define vint vector<int>
#define vvint vector<vector<int>>

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int gcd(int x, int y) {
    int m = min(x, y);
    for(int d=m; d>0; d--) {
        if(x % d == 0 && y % d == 0) {
            return d;
        }
    }
}
//111
int main(void){
    string s;
    cin >> s;
    int bit = 1;
    int maxAns = 1e9+7;
    while(bit < (1 << s.size())){
        int num = 0;
        for(int i = 0;i < s.size();i++){
            if(bit & (1 << i)){
                num += (s.at(i) - '0');
            }
        }
        if(num % 3 == 0){
            int ans = 0;
            for(int i = 0;i < s.size();i++){
                if(!(bit & (1 << i))){
                    ans++;
                }
            }
            if(maxAns > ans){
                maxAns = ans;
            }
        }
        bit++;
    }
    if(maxAns == 1e9+7){
        maxAns = -1;
    }
    cout << maxAns << endl;
    return 0;
}
