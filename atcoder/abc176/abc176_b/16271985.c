// URL: https://atcoder.jp/contests/abc176/submissions/16271985
// Date: Fri, 28 Aug 2020 09:52:10 +0900
// Language: C (GCC 9.2.1)
#include <stdio.h>

int main() {
    char n[200000];
    unsigned long sum = 0;
    gets(n);
    for(int i = 0;n[i] != '\0';i++){
        sum += n[i] - '0';
    }
    printf((sum % 9)? "No\n" : "Yes\n");
    return 0;
}
