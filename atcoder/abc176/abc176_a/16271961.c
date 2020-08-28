// URL: https://atcoder.jp/contests/abc176/submissions/16271961
// Date: Fri, 28 Aug 2020 09:49:16 +0900
// Language: C (GCC 9.2.1)
#include <stdio.h>

int main() {
    int n,x,t;
    scanf("%d %d %d",&n,&x,&t);
    printf("%d\n",(!(n % x))? (n / x) * t: ((n / x) + 1) * t);
    return 0;
}
