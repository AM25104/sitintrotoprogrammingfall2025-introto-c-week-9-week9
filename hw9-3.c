#include <stdio.h>

int main(void) {
    double A[2][3];
    double B[3][2];
    double C[2][2];

    /* Read first matrix A (2x3) */
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (scanf("%lf", &A[i][j]) != 1) return 0;
        }
    }

    /* Read second matrix B (3x2) */
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (scanf("%lf", &B[i][j]) != 1) return 0;
        }
    }

    /* Echo matrices (using %g to match formatting in examples) */
    printf("The first matrix you entered is\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%g ", A[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%g ", B[i][j]);
        }
        printf("\n");
    }

    /* Multiply: C = A (2x3) * B (3x2) => C (2x2) */
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0.0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The multiplication product of matrix A and matrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%g ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}


