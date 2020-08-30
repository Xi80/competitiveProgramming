// URL: https://atcoder.jp/contests/abc170/submissions/16392278
// Date: Sun, 30 Aug 2020 12:18:24 +0900
// Language: C (GCC 9.2.1)
#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    for(int i = 1;i <= x;i++){
        if(i * 2 + (x - i) * 4 == y || i * 4 + (x - i) * 2 == y){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}
