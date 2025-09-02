#include <stdio.h>
int i;
int main(){
struct profile
{
    float x,y
}u,v;
{
    printf("u_x: ");
    scanf("%f", &u.x);
    printf("u_y: ");
    scanf("%f", &u.y);
    printf("v_x: ");
    scanf("%f", &v.x);
    printf("v_y: ");
    scanf("%f", &v.y);
}
float sumu= u.x+u.y;
float sumv= v.x+v.y;
printf("\nResultant vector is equvalence to %.1fi + %.1fj", sumu, sumv);
return 0;
}