// URL: https://atcoder.jp/contests/abc167/submissions/13035541
// Date: Sun, 10 May 2020 21:08:35 +0900
// Language: C++ (Clang 10.0.0)
#include<iostream>
#include<string>
using namespace std;

int main(void){
    string s,t;
    cin >> s >> t;
    for(int i = 0;i < s.size();i++){
        if(s.at(i) != t.at(i)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
