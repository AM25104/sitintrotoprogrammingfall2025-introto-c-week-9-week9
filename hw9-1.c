#include <stdio.h>

int main(void) {
    float a[2][2];
    scanf("%f %f %f %f", &a[0][0], &a[0][1], &a[1][0], &a[1][1]);

    printf("Matrix:\n");
    printf("%.2f %.2f\n", a[0][0], a[0][1]);
    printf("%.2f %.2f\n", a[1][0], a[1][1]);

    float det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    printf("Determinant = %.2f\n", det);
    return 0;
}


