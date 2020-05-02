// URL: https://atcoder.jp/contests/abc086/submissions/12566893
// Date: Sat, 02 May 2020 15:51:08 +0900
// Language: C (GCC 5.4.1)
#include <stdio.h>

int main() {
    short a = 0,b = 0;
    scanf("%d %d",&a,&b);
    printf("%s\n",(a * b % 2)? "Odd" : "Even");
    return 0;
}
