// URL: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4791635
// Date: Tue, 25 Aug 2020 16:44:37 +0900
// Language: C++14
#include <stdio.h>

int main() {
    int ans = 0,tmp;
    for(int i = 0;i < 4;i++){
        scanf("%d",&tmp);
        ans += tmp;
    }
    printf("%d\n",ans);
    return 0;
}
