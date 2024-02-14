#include <stdio.h>

int f(int n);

int main(void)
{
    printf("%d\n",f(3));
}

int f(int n)
{
int r = -20220204;
    for(int i = 0;i <= n;i++){
        for(int j = 2 * i;j <= 2 * n;j++){
            r += j / (i + 1);
        }
    }
return r;
}