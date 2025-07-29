#include <stdio.h>
int main (){
   int num, sum = 0, i = 1;
    while (i <= 10) {
    printf("%d. Enter the number: ", i);
    scanf("%d", &num);
         sum = sum + i;
         i++;
    }
    printf("Total sum is %d", sum);
    return 0;     
}