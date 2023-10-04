#include <stdio.h>

int compare (int array[], int size);

int main(void){
    int size = 10;
    
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[] = {1, 2, 4, 4, 5, 6, 7, 8, 9, 10};
    int array3[] = {1, 2, 4, 8, 5, 6, 7, 8, 9, 10};
    int array4[] = {1, 2, 4, 8, 16, 6, 7, 8, 9, 10};
    int array5[] = {1, 2, 4, 8, 16, 32, 7, 8, 9, 10};
    int array6[] = {1, 2, 4, 8, 16, 32, 64, 8, 9, 10};
    int array7[] = {1, 2, 4, 8, 16, 32, 64, 128, 9, 10};
    int array8[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 10};
    int array9[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

    compare(array1, size);
    compare(array2, size);
    compare(array3, size);
    compare(array4, size);
    compare(array5, size);
    compare(array6, size);
    compare(array7, size);
    compare(array8, size);
    compare(array9, size);

    return 0;
}

int compare(int array[], int size){
    int counterTrue = 0;
    int counterCompare = 0;
    for(int i = 1; i < size; i++){
        int r = array[i] / array[i - 1];
        if(array[i] == r * array[i - 1]){
            counterTrue++;
        }
        else{break;}
        counterCompare += 2;
    }
    if (counterTrue == size - 1){
        printf("É geométrica!\n");
    }  
    else{
        printf("Nao é geométrica!\n");

    }
    printf("Numero de operacoes: %d\n\n", counterCompare);
    return 0;
}