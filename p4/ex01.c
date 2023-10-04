#include <stdio.h>

int compare(int array[], int size);

int main(void){
    int size = 10;

    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[] = {1, 2, 1, 4, 5, 6, 7, 8, 9, 10};
    int array3[] = {1, 2, 1, 3, 2, 6, 7, 8, 9, 10};
    int array4[] = {0, 2, 2, 0, 3, 3, 0, 4, 4, 0};
    int array5[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    compare(array1, size);
    compare(array2, size);
    compare(array3, size);
    compare(array4, size);
    compare(array5, size);


    return 0;
}

int compare(int array[], int size){
    int counter = 0;
    int counter1 = 0;
    for(int i = 1; i < size - 1; i++){
        if (array [i] == array [i - 1] + array [i + 1]){
            counter++;
        }
    counter1++;
    }
    printf("Respeitam a propriedade: %d ; Counter de comparacoes: %d\n", counter, counter1);
    return 0;
}