#include<stdio.h>

int main ( void )
{
    char name[20];
    printf("What's your name?");
    scanf("%s", name);
    printf("Hello %s", name);
}