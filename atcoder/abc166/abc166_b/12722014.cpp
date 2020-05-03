// URL: https://atcoder.jp/contests/abc166/submissions/12722014
// Date: Sun, 03 May 2020 21:08:24 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<bool> vec(n);
    for(int i = 0;i < n;i++){
        vec.at(i) = false;
    }

    for(int i = 0;i < k;i++){
        int d;
        cin >> d;
        for(int j = 0;j < d;j++){
            int a;
            cin >> a;
            vec.at(a - 1) = true;
        }
    }
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(vec.at(i) == false){
            cnt++;
        }
    }
    cout << cnt << endl;
}
