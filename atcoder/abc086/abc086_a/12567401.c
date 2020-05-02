// URL: https://atcoder.jp/contests/abc086/submissions/12567401
// Date: Sat, 02 May 2020 16:05:40 +0900
// Language: C (GCC 5.4.1)
#include <stdio.h>

int main(void){
    long long int a = 0,b = 0;
    scanf("%d %d",&a,&b);
    long long int tmp = 0;
    for(long long int i = 1;i <= b;i += 1){
        tmp += a;
    }
    for(long long int i = 0;i < 5000 * 10001;i += 1){
        if(tmp == i * 2){
            printf("Even\n");
            return 0;
        }
    }
    printf("Odd\n");
    return 0;
}
