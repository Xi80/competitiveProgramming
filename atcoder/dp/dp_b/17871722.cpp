// URL: https://atcoder.jp/contests/dp/submissions/17871722
// Date: Wed, 04 Nov 2020 15:40:19 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
using namespace std;

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
    int n,k;
    cin >> n >> k;
    vector<int> h(n + 1000),dp(n + 1000);

    for(int i = 0;i < n;i++){
        cin >> h.at(i);
        dp.at(i) = 1e9+7;
    }

    dp.at(0) = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= k; ++j) {
            chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
        }
    }

    cout << dp[n - 1] << endl;
    return 0;
}
