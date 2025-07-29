#include <stdio.h>
int main (){
    int num, dup = 0, i, ans = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    dup = num;
    for(int i = 1; i <=num; i++) {
        ans = ans * dup;
        dup = dup - 1;
    }
    printf("Factorial of %d is %d", num, ans);
    return 0;
}