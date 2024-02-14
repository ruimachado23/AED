#include <stdio.h>

void insertElement(int sorted[], int n, int elem);

void insertionSort(int a[], int n) {
    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]){
            insertElement(a, i, a[i]);
        }
    }
}

void insertElement(int sorted[], int n, int elem){
    int i;
    for(i = n-1; i >= 0 && elem < sorted[i]; i--){
        sorted[i+1] = sorted[i];
    }
    sorted[i+1] = elem;
}