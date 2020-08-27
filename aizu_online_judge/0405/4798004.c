// URL: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4798004
// Date: Thu, 27 Aug 2020 13:39:01 +0900
// Language: C
//
// Created by c0ntr on 2020/08/27.
//

#include<stdio.h>

/*
 * 方針
 * A <= input <= Z --> 1
 * a <= input <= z --> 2
 * それ以外 --> 0
 */

int main(void) {
    int input;
    int ans = -1;

    scanf("%d",&input);

    if('A' <= input && input <= 'Z'){
        ans = 1;
    } else if('a' <= input && input <= 'z'){
        ans = 2;
    } else {
        ans = 0;
    }

    printf("%d\n",ans);
    return 0;
}
