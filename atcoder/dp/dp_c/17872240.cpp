// URL: https://atcoder.jp/contests/dp/submissions/17872240
// Date: Wed, 04 Nov 2020 16:08:01 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
using namespace std;

#define A_ 0
#define B_ 1
#define C_ 2

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

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    vector<vector<int>> dp(n * 2,vector<int> (3));

    for(int i = 0;i < n * 2;i++){
        for(int j = 0;j < 3;j++){
            dp.at(i).at(j) = 0;
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0; j < 3; j++)
            cin >> a.at(i).at(j);
    }

    for(int i = 1;i <= n;i++){
        for(int j = 0; j < 3;j++){
            // dp[i][j]

            for(int k = 0; k < 3; k++) {
                if(j == k) continue;
                chmax(dp[i][j], dp[i - 1][k] + a[i - 1][j]);
            }
        }
    }
    cout << *max_element(begin(dp[n]), end(dp[n])) << endl;
    return 0;
}
