#include <stdio.h>

int f(int x) { return x * x - 1; }
int g(int x) { return x / 3; }

int main(void)
{
int c = 0;
for(int i = 0;i <= 10;i++)
if( f(i) && g(i) )
{
printf("i = %d\n",i);
c += g(i);
}
printf("c = %d\n",c);
}