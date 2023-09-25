#include <stdio.h>
#include <stdlib.h>

void DisplayArray(double* a, size_t n);
double* ReadArray(size_t* size_p);
double* Append(double* array_1, size_t size_1, double* array_2, size_t size_2);

int main(void) {
    size_t size1, size2;
    double* array1 = ReadArray(&size1);
    double* array2 = ReadArray(&size2);

    if (array1 != NULL && array2 != NULL) {
        DisplayArray(array1, size1);
        DisplayArray(array2, size2);

        double* combined = Append(array1, size1, array2, size2);
        if (combined != NULL) {
            DisplayArray(combined, size1 + size2);
            free(combined);
        } else {
            printf("Memory allocation failed for the combined array.\n");
        }
    } else {
        printf("Error reading input arrays.\n");
    }

    free(array1);
    free(array2);

    return 0;
}

void DisplayArray(double* a, size_t n) {
    printf("Array = [ ");
    for (size_t i = 0; i < n; i++) {
        printf("%.2lf", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf(" ]\n");
}

double* ReadArray(size_t* size_p) {
    size_t size;
    printf("Enter the number of elements: ");
    if (scanf("%zu", &size) != 1 || size <= 0) {
        *size_p = 0;
        return NULL;
    }

    double* array = (double*)malloc(size * sizeof(double));
    if (array == NULL) {
        *size_p = 0;
        return NULL;
    }

    printf("Enter %zu elements:\n", size);
    
    for (size_t i = 0; i < size; i++) {
        if (scanf("%lf", &array[i]) != 1) {
            free(array);
            *size_p = 0;
            return NULL;
        }
    }

    *size_p = size;
    return array;
}

double* Append(double* array_1, size_t size_1, double* array_2, size_t size_2) {
    double* combined = (double*)malloc((size_1 + size_2) * sizeof(double));
    if (combined == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < size_1; i++) {
        combined[i] = array_1[i];
    }

    for (size_t i = 0; i < size_2; i++) {
        combined[size_1 + i] = array_2[i];
    }

    return combined;
}