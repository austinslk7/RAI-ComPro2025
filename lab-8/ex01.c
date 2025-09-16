#include<stdio.h>
float Circum(int);
float Area(int);
int main() { 
    int radius;
    printf("Enter radius in cm: "); 
    scanf("%d",&radius);
    printf("Circumference = %.2f\n",Circum(radius));
    printf("Area = %.2f\n",Area(radius));
    return 0;
}
float Circum( int rad ) { 
    float answer1=0;
    answer1 = 2*22.0/7.0*rad ;
    return answer1;
}
float Area( int rad ) { 
    float answer2=0;
    answer2 = 22.0/7.0*rad*rad ;
    return answer2;
}