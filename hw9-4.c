#include <stdio.h>

int main(void) {
    int r, g, b;

    if (scanf("%d", &r) != 1) return 0;
    if (scanf("%d", &g) != 1) return 0;
    if (scanf("%d", &b) != 1) return 0;

    
    printf("The hex code is #%02X%02X%02X\n", r, g, b);

    return 0;
}


