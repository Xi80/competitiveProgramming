// URL: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4180309
// Date: Mon, 17 Feb 2020 14:24:37 +0900
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
void draw(int H,int W){
    rep(i,H){
        if(!(i == 0 || i == H - 1)){
            rep(i,W){
                if(i == 0 || i == W - 1){
                    print("#");
                } else {
                    print(".");
                }
            }
        } else {
            rep(i,W){
                print("#");
            }
        }

        printn;
    }
    printn;
}

void solve() {
    vector<pair<int,int>> squares;
    loop{
        int H,W;
        read(H);
        read(W);
        if(H == W && W == 0){
            break;
        }
        pair<int,int> tmp;
        tmp.first=H;
        tmp.second=W;
        squares.push_back(tmp);
    };
    rep(i,squares.size()){
        draw(squares.at(i).first,squares.at(i).second);
    }

}

signed main() {
    solve();
    return 0;
}
