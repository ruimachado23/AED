#include <stdio.h>
#include <math.h>

int main(void)
{
    int lines, i, square;
    double sq;

    printf("Quantas linhas tera a tabela?");
    scanf("%d", &lines);

    printf("Numero Raiz Quadrado\n");

    for (i = 1; i <= lines; ++i)
    {
        square = i * i;
        sq = sqrt(i);
        printf("%d %9d %2lf\n", i, square, sq);
    }

    return 0;
}
