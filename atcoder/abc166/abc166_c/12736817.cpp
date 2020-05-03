// URL: https://atcoder.jp/contests/abc166/submissions/12736817
// Date: Sun, 03 May 2020 21:27:35 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> h(n);
    vector<bool> low(n);
    for(int i = 0;i < n;i++){
        low.at(i) = false;
        cin >> h.at(i);
    }
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        if(h.at(a - 1) > h.at(b - 1)){
            low.at(b - 1)= true;
        } else if(h.at(a - 1) < h.at(b - 1)){
            low.at(a - 1)= true;
        } else {
            low.at(a-1) = true;
            low.at(b-1) = true;
        }
    }
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(low.at(i) == false){cnt++;}
    }
    cout << cnt << endl;
}
