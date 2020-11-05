// URL: https://atcoder.jp/contests/joi2009yo/submissions/17894431
// Date: Thu, 05 Nov 2020 23:21:19 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
#define vint vector<int>
#define vvint vector<vector<int>>
#define h_ 0
#define m_ 1
#define s_ 2

using namespace std;

vint calcTime(vint from,vint to){
    vint ret(3);
    ret.at(s_) = to.at(s_) - from.at(s_) + ((to.at(s_) - from.at(s_) < 0)? 60 : 0);
    ret.at(m_) = to.at(m_) - from.at(m_)  + ((to.at(m_) - from.at(m_) < 0)? 60 : 0) - ((to.at(s_) - from.at(s_) < 0)? 1 : 0);
    ret.at(h_) = to.at(h_) - from.at(h_) - ((to.at(m_) - from.at(m_) < 0)? 1 : 0);
    ret.at(m_) += (ret.at(m_) < 0)? 60 : 0;
    return ret;
}

vint inputTime(void){
   vint ret(3);
   cin >> ret.at(h_) >> ret.at(m_) >> ret.at(s_);
   return ret;
}

void outputTime(vint time){
    cout << time.at(h_) << " " << time.at(m_) << " " << time.at(s_) << endl;
    return;
}

int main(void){
    vvint t(6,vector<int> (3));

    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 2;j++){
            t.at(i * 2 + j) = inputTime();
        }
    }

    for(int i = 0;i < 3;i++){
        vint tmp(3);
        tmp = calcTime(t.at(i * 2),t.at(i * 2 + 1));
        outputTime(tmp);
    }
    return 0;
}
