// URL: https://atcoder.jp/contests/joi2011yo/submissions/17894723
// Date: Thu, 05 Nov 2020 23:36:23 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
#define rep(i, n) for (int (i) = 0; i < (int)(n); (i)++)
#define vint vector<int>
#define vvint vector<vector<int>>

using namespace std;

int main(void){
    int sum = 0;
    rep(i,4){
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    cout << sum / 60 << endl << sum % 60 << endl;
    return 0;
}
