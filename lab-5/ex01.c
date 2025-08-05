#include <stdio.h>
int main()
{
    int value[11],i,j;
    for (i=1;i<=10;i++)
    {
        printf("Enter the value %d here: ", i);
        scanf("%d", &value[i]);        
    }
    printf("Values in array are: ");
    for (j=1;j<=10;j++)
    {
    printf("%d, ", value[j]);
    }
return 0;
}