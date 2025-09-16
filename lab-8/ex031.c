#include <stdio.h>
#include <math.h>
int i;
void two_integers(int num1,int num2){
    int ans = (num1*num1)+(num2*num2);
    printf("Sum of squares of %d and %d is %d", num1,num2,ans);
}

int main (){
    int a,b;
    printf("Enter the two integers: ");
    scanf("%d %d", &a,&b);
    two_integers(a,b);
    return 0;
}