#include <stdio.h>
int main (){
    int i;
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int n = sizeof(array)/sizeof(array[0]);
    int*pt_array;
    pt_array = &array;
    int max = *pt_array;
    for(i=1;i<n;i++){
       pt_array++;
       if(*pt_array>max){
            max = *pt_array;
       }    
    }
    printf("Max value: %d\n", *pt_array);
    return 0;
}