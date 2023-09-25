#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main(void)
{
    int gap, min, max;
    double gapR, minR, maxR;

    printf("Angulo mínimo: ");
    scanf("%d", &min);
    printf("Angulo máximo: ");
    scanf("%d", &max);
    printf("Gap: ");
    scanf("%d", &gap);

    minR = min * M_PI / 180;
    maxR = max * M_PI / 180;
    gapR = gap * M_PI / 180;

    printf("ang sin(ang) cos(ang)\n");


    for(int i = minR; i <= maxR; i+=gapR)
    {
        double sin2 = sin(i);
        double cos2 = cos(i);

        printf("%d %lf %lf", i, sin2, cos2);
    }
    
    return 0;
}
