#include <stdio.h>
int main (){
    int size = 6;
	int array[] = { 3, 1, 2, 4, 5, 6 };
    int i;
    int *pt_array = array;
    int sum = 0;
    for(i;i<=size;i++){
        sum += *pt_array;
    }
    printf("The sum of array is: %d", sum);
    return 0;
}