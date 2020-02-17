// URL: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4180364
// Date: Mon, 17 Feb 2020 14:43:00 +0900
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
    vector<bool> S(13);
    vector<bool> H(13);
    vector<bool> C(13);
    vector<bool> D(13);
    int n;
    read(n);
    rep(i,n){
        char c;
        int n;
        read(c);
        read(n);
        switch(c){
            case 'S':
                S.at(n - 1) = true;
                break;
            case 'H':
                H.at(n - 1) = true;
                break;
            case 'C':
                C.at(n - 1) = true;
                break;
            case 'D':
                D.at(n - 1) = true;
                break;
        }
    }
    rep(i,13){
        if(S.at(i) == false){
            print("S");
            print(" ");
            print(i + 1);
            printn;
        }
    }
    rep(i,13){
        if(H.at(i) == false){
            if(H.at(i) == false){
                print("H");
                print(" ");
                print(i + 1);
                printn;
            }
        }
    }
    rep(i,13){
        if(C.at(i) == false){
            if(C.at(i) == false){
                print("C");
                print(" ");
                print(i + 1);
                printn;
            }
        }
    }
    rep(i,13){
        if(D.at(i) == false){
            if(D.at(i) == false){
                print("D");
                print(" ");
                print(i + 1);
                printn;
            }
        }
    }
}

signed main() {
    solve();
    return 0;
}
