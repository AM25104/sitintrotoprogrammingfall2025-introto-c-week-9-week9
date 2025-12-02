
#include <stdio.h>

int main(void) {
    int a[5];
    int i, j;

   
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

   
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    printf("sorted array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
 
    return 0;
}


