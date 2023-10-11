#include <stdio.h>

int t3(int n, int *counter);

int main(void) {
    int n_values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = 15;
    for (int i = 0; i < size; i++){
        int counter = 0;
        int result = t3(n_values[i], &counter);
        
        printf("-> n = %d\n", n_values[i]);
        printf("Result: %d\n", result);
        printf("Function called %d times.\n", counter);
        printf("\n-----------------------\n");
    }
    return 0;
}

int t3(int n, int *counter) {
    (*counter)++;

    if (n == 1) {
        return 1;
    } else if (n % 2 != 0){
        return t3(n / 2, counter) + t3(n / 2, counter) + n;
    } else{
        return (2 * t3(n / 2, counter)) + n;
    }
}
