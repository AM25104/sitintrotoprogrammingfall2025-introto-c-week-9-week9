#include <stdio.h>

int main(void) {
    int r, g, b;

    if (scanf("%d", &r) != 1) return 0;
    if (scanf("%d", &g) != 1) return 0;
    if (scanf("%d", &b) != 1) return 0;

    int colors[5][3] = {
        {0,   0,   0},   
        {255, 0,   0},  
        {0,   255, 0},    
        {0,   0,   255},   
        {255, 255, 255}    
    };

    const char *names[5] = {
        "Black", "Red", "Green", "Blue", "White"
    };

    long bestDist = -1;
    int bestIdx = 0;

    for (int i = 0; i < 5; i++) {
        long dr = r - colors[i][0];
        long dg = g - colors[i][1];
        long db = b - colors[i][2];
        long dist = dr * dr + dg * dg + db * db;  

        if (bestDist < 0 || dist < bestDist) {
            bestDist = dist;
            bestIdx = i;
        }
    }

    printf("The nearest color is %s\n", names[bestIdx]);

    return 0;
}


