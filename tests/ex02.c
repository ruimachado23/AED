#include <stdio.h>

void mem_copy(char *src,char *dst,size_t size);

int main(void)
{
    char c[10] = {0,1,2,3,4,5,6,7,8,9};
    mem_copy(&c[5],&c[4],4); 

    for(int i = 0;i < 10;i++){
        printf("%d ",c[i]);
    }
}


void mem_copy(char *src,char *dst,size_t size)
{
for(size_t i = 0;i < size;i++)
dst[i] = src[i];
}

