// URL: https://atcoder.jp/contests/dp/submissions/17871502
// Date: Wed, 04 Nov 2020 15:26:38 +0900
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
    int n;
    vector<int> dp(100000);
    vector<int> h(100000);

    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> h.at(i);
    }

    for(int i = 0;i < n;i++){
        dp.at(i) = 1e9 + 7;
    }

    dp.at(0) = 0;

    for(int i = 1;i < n;i++){
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    cout << dp[n-1] << endl;
    return 0;
}
