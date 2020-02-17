// URL: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4180401
// Date: Mon, 17 Feb 2020 14:57:50 +0900
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
    vector<vector<int>> vec1(3,vector<int> (10));
    rep(i,3){
        rep(j,10){
            vec1.at(i).at(j) = 0;
        }
    }
    vector<vector<int>> vec2(3,vector<int> (10));
    rep(i,3){
        rep(j,10){
            vec2.at(i).at(j) = 0;
        }
    }
    vector<vector<int>> vec3(3,vector<int> (10));
    rep(i,3){
        rep(j,10){
            vec3.at(i).at(j) = 0;
        }
    }
    vector<vector<int>> vec4(3,vector<int> (10));
    rep(i,3){
        rep(j,10){
            vec4.at(i).at(j) = 0;
        }
    }
    int n;
    read(n);
    rep(i,n){
        int b,f,r,v;
        read(b);
        read(f);
        read(r);
        read(v);
        switch(b){
            case 1:
                vec1.at(f - 1).at(r - 1) += v;
                break;
            case 2:
                vec2.at(f - 1).at(r - 1) += v;
                break;
            case 3:
                vec3.at(f - 1).at(r - 1) += v;
                break;
            case 4:
                vec4.at(f - 1).at(r - 1) += v;
                break;
        }
    }
    rep(i,3){
        rep(j,10){
            print(" ");
            print(vec1.at(i).at(j));
        }
        printn;
    }
    rep(i,20)print("#");
    printn;
    rep(i,3){
        rep(j,10){
            print(" ");
            print(vec2.at(i).at(j));
        }
        printn;
    }
    rep(i,20)print("#");
    printn;
    rep(i,3){
        rep(j,10){
            print(" ");
            print(vec3.at(i).at(j));
        }
        printn;
    }
    rep(i,20)print("#");
    printn;
    rep(i,3){
        rep(j,10){
            print(" ");
            print(vec4.at(i).at(j));
        }
        printn;
    }
}

signed main() {
    solve();
    return 0;
}
