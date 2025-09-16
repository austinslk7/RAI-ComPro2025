#include <stdio.h>
#include <math.h>

float area (float a, float b, float c){
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main (){
    float a,b,c,s;
    printf("Enter value 1: ");
    scanf("%f", &a);
    printf("Enter value 2: ");
    scanf("%f", &b);
    printf("Enter value 3: ");
    scanf("%f", &c);
    
    s = area(a,b,c);
    printf("Area is %.2f", s);
    return 0;
}