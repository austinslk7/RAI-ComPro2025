#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    float d,dx,dy;
    struct coordinate{
        float x,y;
    }c[3];
    for(i=0;i<2;i++){
        printf("x%d",i+1);
        scanf("%f", &c[i].x);
        printf("y%d",i+1);
        scanf("%f", &c[i].y);
    }
    dx = powf((c[0].x-c[1].x),2);
    dy = powf((c[0].y-c[1].y),2);
    d = sqrtf(dx+dy);
    printf("Distance between %.1f,%.1f and %.1f,%.1f is %.3f units(s)",c[0].x,c[0].y,c[1].x,c[1].y,d);
    return 0;
}