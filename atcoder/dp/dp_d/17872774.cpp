// URL: https://atcoder.jp/contests/dp/submissions/17872774
// Date: Wed, 04 Nov 2020 16:35:37 +0900
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
    int n,w;
    cin >> n >> w;

    vector<vector<int>> item(n,vector<int> (2));
    vector<vector<long long int>> dp(n + 1000,vector<long long int> (w + 1000));

    for(int i = 0;i < n;i++){
        for(int j = 0;j < 2;j++){
            cin >> item.at(i).at(j);
        }
    }

    for(int i = 0;i < n + 1000;i++){
        for(int j = 0;j < w + 1000;j++){
            dp.at(i).at(j) = 0;
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j <= w;j++){
            if(j - item.at(i).at(0) >= 0){
                chmax(dp.at(i + 1).at(j),dp.at(i).at(j - item.at(i).at(0)) + item.at(i).at(1));
            }
            chmax(dp.at(i + 1).at(j),dp.at(i).at(j));
        }
    }
    cout << dp.at(n).at(w) << endl;
    return 0;
}
