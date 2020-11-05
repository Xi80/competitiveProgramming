// URL: https://atcoder.jp/contests/joi2012yo/submissions/17894789
// Date: Thu, 05 Nov 2020 23:39:53 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
#define rep(i, n) for (int (i) = 0; i < (int)(n); (i)++)
#define vint vector<int>
#define vvint vector<vector<int>>

using namespace std;

int main(void){
    vint pasta(3);
    vint juice(2);
    rep(i,3){
        cin >> pasta.at(i);
    }
    rep(i,2){
        cin >> juice.at(i);
    }
    cout << *min_element(pasta.begin(),pasta.end()) + *min_element(juice.begin(),juice.end()) - 50 << endl;
    return 0;
}
