
#include <stdio.h>

int main(void) {
    double A[2][3];
    double B[3][2];
    double C[2][2];
    int i, j, k;

   
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%lf", &B[i][j]);
        }
    }

    printf("The first matrix you entered is\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%g ", A[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%g ", B[i][j]);
        }
        printf("\n");
    }

 
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The multiplication product of matrix A and matrix B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%g ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}


