#include <stdio.h>
#include <stdlib.h>

// Função para mesclar dois subarrays de arr[]
// Primeira subarray é arr[l..m]
// Segunda subarray é arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Arrays temporários
    int L[n1], R[n2];

    // Copiar dados para os arrays temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Mesclar os arrays temporários de volta para arr[l..r]
    i = 0; // Índice inicial do primeiro subarray
    j = 0; // Índice inicial do segundo subarray
    k = l; // Índice inicial do subarray mesclado
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar os elementos restantes de L[], se houver algum
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiar os elementos restantes de R[], se houver algum
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// l é para o índice esquerdo e r é o índice direito do subarray de arr a ser ordenado
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Mesmo que (l+r)/2, mas evita overflow para grandes l e r
        int m = l + (r - l) / 2;

        // Ordena a primeira e a segunda metades
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}