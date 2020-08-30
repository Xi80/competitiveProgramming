// URL: https://atcoder.jp/contests/abc171/submissions/16391794
// Date: Sun, 30 Aug 2020 11:55:22 +0900
// Language: C (GCC 9.2.1)
#include <stdio.h>

int search(const int p[],int flag[],int length){
    int minVal = 1000,minIndex = 0;
    for(int i = 0;i < length;i++){
        if(p[i] <= minVal && flag[i] != 1){
            minVal = p[i];
            minIndex = i;
        }
    }
    flag[minIndex] = 1;
    return minVal;
}

int main() {
    int n,k;
    int p[1000];
    int flag[1000];
    int ans = 0;
    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i++){
        scanf("%d",&p[i]);
        flag[i] = 0;
    }
    for(int i = 0;i < k;i++){
        ans += search(&p[0],&flag[0],n);
    }
    printf("%d\n",ans);
    return 0;
}
