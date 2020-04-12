// URL: https://atcoder.jp/contests/abc162/submissions/11794927
// Date: Sun, 12 Apr 2020 21:03:25 +0900
// Language: C++ (GCC 9.2.1)
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    long long int ans = 0;
    for(int i = 1;i <= n;i++){
        if(i % 3 != 0 && i % 5 != 0){
            ans += i;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}
