#include <stdio.h>
int main (){
    int size = 6;
	int array[] = { 3, 1, 2, 4, 5, 6 };
    int i;
    int *pt_array = array;
    
    for(i;i<=size;i++)
        printf("%d\n", *(array+i));
    return 0;
}