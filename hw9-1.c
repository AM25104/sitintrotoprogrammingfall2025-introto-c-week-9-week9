#include <stdio.h>

int main(void) {
    double a, b, c, d;

    if (scanf("%lf", &a) != 1) return 0;
    if (scanf("%lf", &b) != 1) return 0;
    if (scanf("%lf", &c) != 1) return 0;
    if (scanf("%lf", &d) != 1) return 0;

    double det = a * d - b * c;


    printf("You entered\n");
    printf("%g %g\n", a, b);
    printf("%g %g\n", c, d);

    printf("Determinant is %.6f\n", det);

    return 0;
}


