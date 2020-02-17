// URL: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4180245
// Date: Mon, 17 Feb 2020 13:38:01 +0900
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
    vint cases;
    loop{
        int tmp;
        read(tmp);
        if(tmp == 0){
         break;
        } else {
            cases.push_back(tmp);
        }
    };
    rep(i,cases.size()){
        if(cases.at(i) == 0){continue;}
        cout << "Case" << " " << i + 1 << ":" << " " << cases.at(i) << endl;
    }
}

signed main() {
    solve();
    return 0;
}
