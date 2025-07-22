#include <stdio.h>
int main(){
    int number, check;
    printf("Enter a number: ");
    scanf("%d", &number);
    check = number %2;
    switch (check){
    case 1:
        switch (number)
        {
        case 1 ... 100:
            printf("%d is odd", number);
            break;    

        default:
            printf("%d is out of range", number);
        }    
        break;
    case 0:
        switch (number)
        {
        case 1 ... 100:
        printf("%d is even", number);
            break;     

        default:
            printf("%d is out of range", number);
            break;
        }
        break;
    }
}