#include <stdio.h>
#define SIZE 9
int main(void)
{
    char lst[SIZE][10] = {"void *", "void", "char", "short", "int",
                       "long", "long long", "float", "double"};
    
    for(int i = 0; i < SIZE; i++){
        printf("sizeof(%s) ... %lu\n", lst[i], sizeof(i));
    }

    return 0;
}