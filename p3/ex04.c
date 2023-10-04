#include <stdio.h>

int main(void) {
    int exp = 3;
    int arr[50];
    int index1 = 0;

    for (int i = 100; i <= 999; i++) {
        int numb[exp];
        int index = 0;
        int temp = i;

        while (temp > 0) {
            int digit = temp % 10;
            numb[index] = digit;
            index++;
            temp /= 10;
        }

        int arm = (numb[0] ^ exp) + (numb[1] ^ exp) + (numb[2] ^ exp);
        arr[index1] = arm;
        index1++;
    }

    for (int i = 0; i < index1; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
