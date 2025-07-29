#include <stdio.h>
int main (){
    int num = 0;
    float sum, avg = 0;
    for(int i = 1; i <=10; i++) {
        
        printf("%d. Enter the number: ", i);
        scanf("%d", &num);
        sum = sum + num;
        avg = sum / 10;
    }
    
    
    printf("total sum is %.0f\n", sum);   
    printf("Average is %.2f", avg);
    return 0;
}