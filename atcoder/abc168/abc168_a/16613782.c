// URL: https://atcoder.jp/contests/abc168/submissions/16613782
// Date: Thu, 10 Sep 2020 20:28:50 +0900
// Language: C (GCC 9.2.1)
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    n %= 10;
    printf((n == 2 || n == 4 || n == 5 || n == 7 || n == 9)? "hon\n" : (n == 0 || n== 1 || n == 6 || n == 8)? "pon\n" : "bon\n");
    return 0;
}
