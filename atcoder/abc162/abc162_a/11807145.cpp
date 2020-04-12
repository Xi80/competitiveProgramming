// URL: https://atcoder.jp/contests/abc162/submissions/11807145
// Date: Sun, 12 Apr 2020 21:09:31 +0900
// Language: C++ (GCC 9.2.1)
#include <iostream>
#include <string>
#include <vector>

int main() {
    bool flag = false;
    std::string str;
    std::cin >> str;
    for(int i = 0;i < 3;i++){
        if(str.at(i) == '7'){
            flag = true;
            std::cout << "Yes" << std::endl;
            break;
        }
    }
    if(!flag){
        std::cout << "No" << std::endl;
    }

}
