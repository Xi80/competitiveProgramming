// URL: https://atcoder.jp/contests/abc164/submissions/12975620
// Date: Sat, 09 May 2020 15:17:39 +0900
// Language: C++ (GCC 9.2.1)
#include<iostream>
#include<map>
#include<string>

int main(void) {
    std::map<std::string,int> dict;
    int n;

    std::cin >> n;
    for(std::string str;n--;dict[str]++){
        std::cin >> str;
    }
    std::cout << dict.size() << std::endl;
    return 0;
}
