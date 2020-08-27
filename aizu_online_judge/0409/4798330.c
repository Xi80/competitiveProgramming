// URL: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4798330
// Date: Thu, 27 Aug 2020 15:07:52 +0900
// Language: C
//
// Created by c0ntr on 2020/08/27.
//

#include <stdio.h>

/*
 * 方針
 * シミュレーションをしていく
 * 境界値を求めて、含まれるまで拡張していく
 */

int memo[64];
int fib(int num){
    if(num == 0)return 0;
    if(num == 1)return 1;
    if(memo[num] != -1) return memo[num];
    memo[num] = fib(num - 1) + fib(num - 2);
    return memo[num];
}

int main(void){
    int flag = 0,pos = -2;
    long x,y;
    long wmin = 0,wmax = 1,hmin = 0,hmax = 1,len = 0;

    for(int i = 0;i < 64;i++){
        memo[i] = -1;
    }
    scanf("%ld %ld",&x,&y);

    while(1){
        for(int i = 0;i < 4;i++){
            pos++;
            if(wmin <= x && x < wmax){
                if(hmin <= y && y < hmax){
                    flag = 1;
                    break;
                }
            }
            len = fib(pos + 3);
            switch(i){
                case 0:
                    wmax += len;
                    break;
                case 1:
                    hmax += len;
                    break;
                case 2:
                    wmin -= len;
                    break;
                case 3:
                    hmin -= len;
                    break;
            }
        }
        if(flag)break;
    }
    printf("%ld\n",((pos + 1) % 3) + 1);
    return 0;
}
