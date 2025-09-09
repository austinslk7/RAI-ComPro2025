#include <stdio.h>
int main (){
    int a = 0;
    int b = 5;
    int*pt_a;
    int*pt_b;
    pt_a = &a;
    pt_b = &b;
    int bobux;
    printf("Before reverse: a = %d, b = %d\n", a,b);
    
    bobux = *pt_a;
    *pt_a = *pt_b;
    *pt_b = bobux;
    printf("After reverse: a = %d, b = %d", a,b);
}