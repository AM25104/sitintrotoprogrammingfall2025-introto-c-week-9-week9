// hw9-1.c
#include <stdio.h>

int main(void) {
    double a, b, c, d;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);

    double det = a * d - b * c;

    printf("Determinant is %f\n", det);

    return 0;
}


