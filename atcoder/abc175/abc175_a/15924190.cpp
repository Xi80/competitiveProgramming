// URL: https://atcoder.jp/contests/abc175/submissions/15924190
// Date: Sat, 15 Aug 2020 21:19:11 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int cnt = 0;
    cin >> s;
    for(int i = 0;i < 3;i++){
        if(s[i] == 'R'){
            cnt++;
        }
    }
    if(cnt < 1){
        cout << "0" << endl;
        return 0;
    }
    if(s[1] == 'S'){
        cout << "1" << endl;
        return 0;
    }
    cout << cnt << endl;
    return 0;
}
