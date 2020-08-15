// URL: https://atcoder.jp/contests/abc175/submissions/15935381
// Date: Sat, 15 Aug 2020 21:43:12 +0900
// Language: C++ (GCC 9.2.1)
#include <bits/stdc++.h>

using namespace std;
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

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
    int indexes[k];
    recursive_comb(indexes, n - 1, k, f);
}

int main() {
    long long int n, cnt = 0;
    cin >> n;
    vector<long long int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }
    foreach_comb(n, 3, [&](int *indexes) {
        if(vec.at(indexes[0]) != vec.at(indexes[1]) && vec.at(indexes[2]) != vec.at(indexes[1]) && vec.at(indexes[2]) != vec.at(indexes[0])){
            if(abs(vec.at(indexes[1]) - vec.at(indexes[2])) < vec.at(indexes[0])){
                if(vec.at(indexes[0]) < (vec.at(indexes[1]) + vec.at(indexes[2]))){
                    cnt++;
                }
            }
        }

    });
    cout << cnt << endl;
    return 0;
}
