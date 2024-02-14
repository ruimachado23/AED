#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Verifique se o target está presente no meio
        if (arr[mid] == target) {
            return mid;
        }

        // Se o target é maior, ignore a metade esquerda
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // Se o target é menor, ignore a metade direita
        else {
            right = mid - 1;
        }
    }

    // Se chegamos aqui, o elemento não estava presente
    return -1;
}