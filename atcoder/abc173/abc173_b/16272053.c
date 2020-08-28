// URL: https://atcoder.jp/contests/abc173/submissions/16272053
// Date: Fri, 28 Aug 2020 09:59:21 +0900
// Language: C (GCC 9.2.1)
#include <stdio.h>

int main() {
    int n;
    int ans[4] = {0,0,0,0};
    scanf("%d",&n);
    for(int i = 0;i <= n;i++){
        char tmp[4];
        gets(tmp);
        switch(tmp[0]){
            case 'A':
                ans[0]++;
                break;
            case 'W':
                ans[1]++;
                break;
            case 'T':
                ans[2]++;
                break;
            case 'R':
                ans[3]++;
                break;
        }
    }
    printf("AC x %d\n",ans[0]);
    printf("WA x %d\n",ans[1]);
    printf("TLE x %d\n",ans[2]);
    printf("RE x %d\n",ans[3]);
    return 0;
}
