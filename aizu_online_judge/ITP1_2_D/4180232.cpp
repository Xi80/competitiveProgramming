// URL: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4180232
// Date: Mon, 17 Feb 2020 13:28:38 +0900
// Language: C++14
// header {{{
using namespace std;

// C++
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <streambuf>
#include <string>
#include <utility>
#include <vector>

#pragma GCC optimization_level 3

// util {{{
#define print(x)	        cout << (x)
#define printvec(x)       for(int i = 0;i < (x).size();i++)cout << (x).at(i) << " ";cout << endl
#define println(x)	        cout << (x) << endl
#define printn		        cout << endl
#define read(x)	            cin >> (x)
#define readvec(x)        for(int i = 0; i < (x).size();i++)cin >> (x).at(i)

#define rep(i, n)	        for(int i = 0; i < (int)(n); i++)
#define rep_1(i, n) 	    for(int i = 1; i <=(int)(n); i++)

#define all(x) 		        (x).begin(),(x).end()
#define vint                vector<int>
#define outif(x,y,z)        if(x) cout<<(y)<<endl; else cout<<(z)<<endl
#define loop 		        while(true)

// }}}

// init {{{
struct ProconInit {
    static constexpr int IOS_PREC = 15;
    static constexpr bool AUTOFLUSH = false;

    ProconInit() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(IOS_PREC);
        if(AUTOFLUSH)
            cout << unitbuf;
    }
} PROCON_INIT;
// }}}

//--------------------------------------------------------------------

void solve() {
    int W,H,x,y,r;
    read(W);
    read(H);
    read(x);
    read(y);
    read(r);
    outif(x-r >= 0 && x+r <= W && y-r >= 0 && y + r <= H,"Yes","No");
}

signed main() {
    solve();
    return 0;
}
