#include <stdio.h>
int main(){
    float h, r, v  = 0.0;
    double pi = 3.14;
    printf("Enter cone height: ");
    scanf("%f", &h);

    printf("Enter cone base radius: ");
    scanf("%f", &r);

    v = 0.333333333*pi*r*r*h;  

    printf("Cone voulunme is %.1f\n", v);

    if (v > 260) {
        printf("This come is perfect for Supun project");
    }
    else {
        printf("This come is not fit for Supun project");
    }    

 return 0;  
}