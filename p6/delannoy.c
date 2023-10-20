#include <stdio.h>

int delannoy(int m, int n);

int main(void){
    printf("Delannoy(1,1) = %d\n", delannoy(1,1));
    printf("Delannoy(2,2) = %d\n", delannoy(2,2));
    printf("Delannoy(3,3) = %d\n", delannoy(3,3));
}

int delannoy(int m, int n){
    if (m == 0 || n == 0){
        return 1;
    }
    return delannoy(m - 1, n) + delannoy(m - 1, n - 1) + delannoy(m, n - 1);
}
