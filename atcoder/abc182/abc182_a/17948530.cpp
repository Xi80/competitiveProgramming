// URL: https://atcoder.jp/contests/abc182/submissions/17948530
// Date: Sun, 08 Nov 2020 21:00:57 +0900
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



int main(void){
    int a,b;
    cin >> a >> b;
    cout << 2 * a + 100 - b << endl;
    return 0;
}
