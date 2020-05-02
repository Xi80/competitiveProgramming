// URL: https://atcoder.jp/contests/abc165/submissions/12578785
// Date: Sat, 02 May 2020 21:11:15 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,a,b;
    cin >> k >> a >> b;
    for(int i = a;i <= b;i++){
        if(i % k == 0){
            cout << "OK" << endl;
            return 0;
        }
    }
    cout << "NG" << endl;
    return 0;
}
