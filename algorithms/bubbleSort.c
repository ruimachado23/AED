#include <stdio.h>

void swap(int *xp, int *yp);

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++)     
        // Os últimos i elementos já estão no lugar
        for (j = 0; j < n-i-1; j++) 
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

// Função para trocar dois elementos de lugar
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}