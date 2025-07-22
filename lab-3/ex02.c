#include <stdio.h>
int main() {
int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 100){
        printf("out of range");
    }
    
    else{
        
    if (num % 2 ==0){
        printf("%d is even", num);
    }
    else {
        printf("%d is odd", num);
    }
}
return 0;
}