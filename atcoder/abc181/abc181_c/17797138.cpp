// URL: https://atcoder.jp/contests/abc181/submissions/17797138
// Date: Sun, 01 Nov 2020 21:24:57 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>
#define rep(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)

using namespace std;

double calcLength(int x0,int y0,int x1,int y1){
    double ret = sqrt((pow(x1-x0,2.0)) + (pow(y1-y0,2.0)));
    return ret;
}

bool checkThreePoints(int x0,int y0,int x1,int y1,int x2,int y2){
    double len1 = calcLength(x0,y0,x1,y1);
    double len2 = calcLength(x0,y0,x2,y2);
    double len3 = calcLength(x1,y1,x2,y2);
    if(abs(len1 + len2 - len3) < 0.0000000001 || abs(len1 + len3 - len2) < 0.0000000001|| abs(len2 + len3 - len1) < 0.0000000001){
        return true;
    } else {
        return false;
    }
}

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
    if (rest == 0) {
        f(indexes);
    } else {
        if (s < 0) return;
        recursive_comb(indexes, s - 1, rest, f);
        indexes[rest - 1] = s;
        recursive_comb(indexes, s - 1, rest - 1, f);
    }
}

void foreach_comb(int n, int k, std::function<void(int *)> f) {
    int indexes[k];
    recursive_comb(indexes, n - 1, k, f);
}


int main() {
    int n;
    bool flag = false;
    cin >> n;
    vector<pair<int,int>> vec(n);
    for(int i = 0;i < n;i++){
        cin >> vec.at(i).first >> vec.at(i).second;
    }
    foreach_comb(n, 3, [&](int *indexes) {
        if(checkThreePoints(vec.at(indexes[0]).first,vec.at(indexes[0]).second,
                            vec.at(indexes[1]).first,vec.at(indexes[1]).second,
                            vec.at(indexes[2]).first,vec.at(indexes[2]).second)){
            flag = true;
        }
    });
    if(!flag){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}
