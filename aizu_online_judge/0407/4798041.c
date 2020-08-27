// URL: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4798041
// Date: Thu, 27 Aug 2020 13:51:32 +0900
// Language: C
//
// Created by c0ntr on 2020/08/27.
//

#include<stdio.h>

/*
 * 方針
 * 一番東と西の家の座標を２で割ると集会所の座標
 * 奇数の場合を考慮する
 */

int main(void) {
    int n,min = 2048,max = -1;
    int ans;

    scanf("%d",&n);

    for(int i = 0;i < n;i++){
        int tmp;
        scanf("%d",&tmp);
        max = (tmp >= max)? tmp : max;
        min = (tmp <= min)? tmp : min;
    }

    ans = ((max + min) & ~0x01) >> 1;
    printf("%d\n",(max - ans > min - ans)? max - ans : min - ans);
    return 0;
}
