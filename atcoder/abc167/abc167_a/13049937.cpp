// URL: https://atcoder.jp/contests/abc167/submissions/13049937
// Date: Sun, 10 May 2020 21:24:05 +0900
// Language: C++ (GCC 9.2.1)
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
