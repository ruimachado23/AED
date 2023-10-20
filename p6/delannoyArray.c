#include <stdio.h>
#include <stdlib.h>

// Função para calcular a matriz de Delannoy D(m, n)
int** calculate_delannoy(int m, int n) {
    // Alocar memória para a matriz
    int **dp = (int **)malloc((m + 1) * sizeof(int *));
    for (int i = 0; i <= m; i++) {
        dp[i] = (int *)malloc((n + 1) * sizeof(int));
    }

    // Preencher os casos base
    for (int i = 0; i <= m; i++) {
        dp[i][0] = 1;
    }
    for (int j = 0; j <= n; j++) {
        dp[0][j] = 1;
    }

    // Preencher a matriz usando a fórmula de Delannoy
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1] + dp[i][j - 1];
        }
    }

    return dp;
}

// Função para imprimir a matriz
void print_matrix(int **matrix, int m, int n) {
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            printf("%10d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m = 5;
    int n = 5;

    int **result_matrix = calculate_delannoy(m, n);

    printf("A matriz de Delannoy para D(%d, %d) é:\n", m, n);
    print_matrix(result_matrix, m, n);

    // Liberar a memória alocada para a matriz
    for (int i = 0; i <= m; i++) {
        free(result_matrix[i]);
    }
    free(result_matrix);

    return 0;
}