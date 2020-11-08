// URL: https://atcoder.jp/contests/abc182/submissions/17973082
// Date: Sun, 08 Nov 2020 21:35:53 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
using namespace std;
#define vint vector<int>
//111
int main(void){
    int n;
    cin >> n;

    vint a(n);

    for(int i = 0;i < n;i++){
        cin >> a.at(i);
    }
    int ans = 0;
    int val = 0;
    for(int i = 2;i <= 1000;i++){
        int tmp = 0;
        for(int j = 0;j < n;j++){
            if(a.at(j) % i == 0){
                tmp++;
            }
        }
        if(val <= tmp){
            val = tmp;
            ans = i;
        }
    }
    cout << ans <<endl;
}
