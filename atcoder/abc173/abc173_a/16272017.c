// URL: https://atcoder.jp/contests/abc173/submissions/16272017
// Date: Fri, 28 Aug 2020 09:55:26 +0900
// Language: C (GCC 9.2.1)
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n",(!(n % 1000))? 0 : ((n / 1000) + 1) * 1000 - n);
    return 0;
}
