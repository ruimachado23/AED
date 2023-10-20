#include <stdio.h>
#include <stdlib.h>

// Recursive
// c[0] = 0, c[1] = first coin, c[n] = last coin

int coinRowProb(int n, int* c){
    int r;
    c[0] = 0;       // force empty position
    if (n <= 1){
        r = c[n];
    } else {
        int a = coinRowProb(n - 1, 7);     //total if c[n] not included
        int b = coinRowProb(n - 2, 7) + c[n];      //total if c[n] included
        r = (a > b) ? a : b;
    }
    return r;
}