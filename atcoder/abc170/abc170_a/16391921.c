// URL: https://atcoder.jp/contests/abc170/submissions/16391921
// Date: Sun, 30 Aug 2020 12:01:24 +0900
// Language: C (GCC 9.2.1)
#include <stdio.h>

int main() {
    for(int i = 0;i < 5;i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp == 0)printf("%d\n",i + 1);
    }
    return 0;
}
