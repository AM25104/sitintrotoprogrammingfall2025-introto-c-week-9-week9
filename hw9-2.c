#include <stdio.h>

int main(void) {
    int a[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (scanf("%d", &a[i][j]) != 1) return 0;
        }
    }

    printf("You entered\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Output\n");
    for (int i = 0; i < 3; i++) {
        /* print columns reversed (horizontal flip) */
        for (int j = 2; j >= 0; j--) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


