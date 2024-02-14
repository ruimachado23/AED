#include <stdio.h>

void swap(int *a, int *b);

void SelectionSort(int *a, unsigned int n) {
    for (unsigned int i = 0; i < n - 1; i++) {
        // Encontrar o índice do menor elemento
        unsigned int min_index = i;
        for (unsigned int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        // Trocar o menor elemento encontrado com o primeiro elemento
        swap(&a[min_index], &a[i]);
    }
}

// Função para trocar dois elementos
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}