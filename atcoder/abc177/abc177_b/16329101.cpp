// URL: https://atcoder.jp/contests/abc177/submissions/16329101
// Date: Sat, 29 Aug 2020 21:18:24 +0900
// Language: C++ (GCC 9.2.1)
#include <iostream>
using namespace std;

int main() {
    int ans = 100000;
    string s,t;
    cin >> s >> t;
    for(int i = 0;i < (s.size() - t.size() + 1);i++){
        int tmp = 0;
        for(int j = 0;j < t.size();j++){
            if(s.at(j + i) != t.at(j)){
                tmp++;
            }
        }
        if(tmp < ans)ans = tmp;
    }

    cout << ans << endl;
    return 0;
}
