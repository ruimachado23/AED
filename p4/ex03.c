#include <stdio.h>

int compare(int array[], int size);

int main(void){
    int array[5] = {1,2,3,4,5};
    int size = sizeof(array);
    compare(array, size);
}

int compare(int array[], int size){
    for(int i = 1; i < size; i++){
        for(int j = 1; j < i; j++){
            for(int k = 1; k < j; k++){
                if(array [i] == array [j] + array [k]){
                    printf("(%d %d %d)", array [i], array [j], array [k]);
                }
            }    
        }
    }
    return 0;
}