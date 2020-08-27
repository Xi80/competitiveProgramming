// URL: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4797987
// Date: Thu, 27 Aug 2020 13:32:12 +0900
// Language: C
//
// Created by c0ntr on 2020/08/27.
//
#include<stdio.h>

/*
 * 方針
 * 入力を４回受け取って足していくだけ
 */

int main(void){
    int input,ans = 0;
    for(int i = 0;i < 4;i++){
        int tmp;
        scanf("%d",&tmp);
        ans += tmp;
    }
    printf("%d\n",ans);
    return 0;
}
