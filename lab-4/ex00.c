#include <stdio.h>
int main(){

    int num1, num2, num3, choice = 0;
    printf("Enter Num1: ");
    scanf("%d", &num1);

    printf("Enter Num2: ");
    scanf("%d", &num2);

    printf("Calculator Menu: \n 1. +\n 2. -\n 3. *\n 4. / ");
    printf("\nChoose menu: ");
    scanf("%d", &choice);

    if (choice == 1) {
        num3 = num1 + num2;
        printf("Ans : Num1 + Num2 = %d", num3);
    }
    else if (choice == 2) {
        num3 = num1 - num2;
        printf("Ans : Num1 - Num2 = %d", num3);
    }
    else if (choice == 3) {
        num3 = num1 * num2;
        printf("Ans : Num1 * Num2 = %d", num3);
    }
    else if (choice == 3) {
        num3 = num1 / num2;
        printf("Ans : Num1 / Num2 = %d", num3);
    }
return 0;   
}