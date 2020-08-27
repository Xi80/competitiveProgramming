// URL: http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4798017
// Date: Thu, 27 Aug 2020 13:42:51 +0900
// Language: C
//
// Created by c0ntr on 2020/08/27.
//

#include<stdio.h>

/*
 * 方針
 * 最上位の'1'ビットを探す
 * それ以外のビットを'0'にする
 */

int main(void) {
    int input,bit = 0;
    scanf("%d",&input);

    while(input >> 1){
            input >>= 1;
            bit++;
    }

    printf("%d\n",1 << bit);
    return 0;
}
