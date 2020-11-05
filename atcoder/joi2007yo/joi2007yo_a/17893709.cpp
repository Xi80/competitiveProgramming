// URL: https://atcoder.jp/contests/joi2007yo/submissions/17893709
// Date: Thu, 05 Nov 2020 22:43:26 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a = 0,b = 0;
    for(int i = 0;i < 4;i++){
        int tmp;
        cin >> tmp;
        a += tmp;
    }

    for(int i = 0;i < 4;i++){
        int tmp;
        cin >> tmp;
        b += tmp;
    }

    cout << max(a,b) << endl;
    return 0;
}
