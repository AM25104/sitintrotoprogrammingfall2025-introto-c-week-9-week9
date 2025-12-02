#include <stdio.h>

int dist2(int r,int g,int b,int R,int G,int B){
    return (r-R)*(r-R) + (g-G)*(g-G) + (b-B)*(b-B);
}

int main(void){
    int r,g,b;
    scanf("%d %d %d",&r,&g,&b);

    char *names[] = {"Black","Red","Green","Blue","White"};
    int colors[5][3] = {
        {0,0,0},
        {255,0,0},
        {0,255,0},
        {0,0,255},
        {255,255,255}
    };

    int best = 0;
    int bestDist = dist2(r,g,b, colors[0][0],colors[0][1],colors[0][2]);

    for(int i=1;i<5;i++){
        int d = dist2(r,g,b, colors[i][0],colors[i][1],colors[i][2]);
        if(d < bestDist){
            bestDist = d;
            best = i;
        }
    }

    printf("%s\n", names[best]);
    return 0;
}


