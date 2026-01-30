#include <stdio.h>

int main(void) {
    int a[5];

    for (int i = 0; i < 5; i++) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }

    
    printf("Input array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    printf("sorted array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d", a[i]);
        if (i < 4) printf(" ");
    }
    printf("\n");

    return 0;
}


