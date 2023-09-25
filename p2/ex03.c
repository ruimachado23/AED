#include <stdio.h>

void Permute(int* a, int* b, int* c);

int main(void){
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    Permute(&a, &b, &c);

    printf("The new order is: %d %d %d\n", a, b, c);

    return 0;
}

void Permute(int* a, int* b, int* c){
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}