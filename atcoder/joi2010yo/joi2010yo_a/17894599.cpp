// URL: https://atcoder.jp/contests/joi2010yo/submissions/17894599
// Date: Thu, 05 Nov 2020 23:29:23 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
#define rep(i, n) for (int (i) = 0; i < (int)(n); (i)++)
#define vint vector<int>
#define vvint vector<vector<int>>

using namespace std;

int main(void){
    int total;
    int sum = 0;
    cin >> total;
    rep(i,9){
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    cout << total - sum << endl;
    return 0;
}
