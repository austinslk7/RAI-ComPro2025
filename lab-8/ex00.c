#include<stdio.h>
float CircleArea( int );
int main() { 
    int radius;
    printf("input radius : "); 
    scanf("%d",&radius);
    printf(" Circle area = %f\n",CircleArea(radius));
    return 0;
}
    float CircleArea( int rad )
{ float answer=0;
answer = 22.0/7.0*rad*rad ;
return answer;
}