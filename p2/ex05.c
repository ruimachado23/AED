#include <stdio.h>

void DisplayPol(int coef[15], size_t degree);

int main(void) {
    size_t degree;
    int coef[15];

    printf("Degree: ");
    scanf("%zu", &degree);  

    if (degree > 14) {
        printf("Degree should be between 0 and 14.\n");
        return 1;  
    }

    printf("Coefficients: ");
    for (size_t i = 0; i < degree + 1; i++) {
        scanf("%d", &coef[i]);  
    }

    DisplayPol(coef, degree);  

    return 0;
}

void DisplayPol(int coef[15], size_t degree) {
    printf("Pol(x) = ");
    for (size_t i = degree; i > 0; i--) {  
        printf("%d * x^%zu + ", coef[i], i);  
    }
    printf("%d\n", coef[0]);  
}
