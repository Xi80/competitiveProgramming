// URL: https://atcoder.jp/contests/abc164/submissions/12353120
// Date: Sun, 26 Apr 2020 21:08:25 +0900
// Language: C++ (GCC 9.2.1)
#include <iostream>
#include <map>
#include <string>

using namespace std; // std::map~, std::cout~とかを省略する為

int main() {
    map<string, int> dict; // 文字列と出現回数の辞書作成

    int n; cin >> n; // 下for文のループ回数
    for (string x; n--; dict[x]++) { // 辞書内の文字列xに対応する出現回数を+1する
        cin >> x; // 文字列 x 入力
    }
    cout << dict.size() << endl;
}
