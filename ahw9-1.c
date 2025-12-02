
#include <stdio.h>

int dist2(int r, int g, int b, int R, int G, int B) {
    int dr = r - R;
    int dg = g - G;
    int db = b - B;
    return dr*dr + dg*dg + db*db;
}

int main(void) {
    int r, g, b;
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    char *names[] = {"Black", "Red", "Green", "Blue", "White"};
    int colors[5][3] = {
        {0,   0,   0  }, 
        {255, 0,   0  }, 
        {0,   255, 0  }, 
        {0,   0,   255}, 
        {255, 255, 255}  
    };

    int best_index = 0;
    int best_d2 = dist2(r, g, b, colors[0][0], colors[0][1], colors[0][2]);

    for (int i = 1; i < 5; i++) {
        int d2 = dist2(r, g, b, colors[i][0], colors[i][1], colors[i][2]);
        if (d2 < best_d2) {
            best_d2 = d2;
            best_index = i;
        }
    }

    printf("The nearest color is %s\n", names[best_index]);

    return 0;
}


