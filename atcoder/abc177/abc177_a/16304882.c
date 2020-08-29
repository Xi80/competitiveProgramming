// URL: https://atcoder.jp/contests/abc177/submissions/16304882
// Date: Sat, 29 Aug 2020 21:01:12 +0900
// Language: C (GCC 9.2.1)
#include <stdio.h>

int main() {
    int d,t,s;
    scanf("%d %d %d",&d,&t,&s);
    if(d <= t * s){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
