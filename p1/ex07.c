#include <stdio.h>

void printArray(const char s[], int a[]);
void cumSum(int a[], int b[]);

int main(void) {
    const char s[] = "yo";

    int a[12] = {31, 28, 31, 30, 31, 30,
                 31, 31, 30, 31, 30, 31};

    printArray(s, a);

    int b[12] = {};

    cumSum(a, b);

    printArray(s, b);

    return 0;
}

void printArray(const char s[], int a[]) {
    printf("%s: ", s);
    for (int i = 0; i < 12; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void cumSum(int a[], int b[]) {
    int c = 0;
    for (int i = 0; i < 12; i++) {
        c += a[i];
        b[i] = c;
    }
}
