#include <stdio.h>

int factorial(int n);

int main(void) {
    int n = 0;
    int sum = 0;
    int arr[50];
    int index = 0;

    while (sum < 10000) {
        sum = 0; 
        for (int i = n; i > 0; i--) {
            sum += factorial(i); 
        }
        arr[index] = n;
        index++;
        n++;
    }

    for (int i = 0; i < index; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
