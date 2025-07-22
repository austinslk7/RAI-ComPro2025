#include <stdio.h>
int main(){

int num1 = 0;
    printf("Enter a number: ");
    scanf("%d", &num1);

    int num2 = 0;
    printf("Enter a number: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Match");
    }
    else {
        printf("Does not match. Try again");
    }    
return 0;



}