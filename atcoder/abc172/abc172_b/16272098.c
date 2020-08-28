// URL: https://atcoder.jp/contests/abc172/submissions/16272098
// Date: Fri, 28 Aug 2020 10:04:31 +0900
// Language: C (GCC 9.2.1)
#include <stdio.h>

int main() {
    char s[200000],t[200000];
    int ans = 0;
    scanf("%s",s);
    scanf("%s",t);
    for(int i = 0;s[i] != '\0' && t[i] != '\0';i++){
        if(s[i] != t[i])ans++;
    }
    printf("%d\n",ans);
    return 0;
}
