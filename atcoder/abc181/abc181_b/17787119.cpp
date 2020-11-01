// URL: https://atcoder.jp/contests/abc181/submissions/17787119
// Date: Sun, 01 Nov 2020 21:05:21 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
#define rep(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)

using namespace std;

int main() {
    int n;
    long long int ans = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        int start,end;
        cin >> start >> end;
        ans += (start + end) * ((end - start + 1) / 2.0);
    }
    cout << ans << endl;
    return EXIT_SUCCESS;
}
