#include <stdio.h>
int main ()
{
    int value[5],i,j;
    float sum;
    int max;
    for (i=0;i<5;i++)
    {
        printf("Enter the mark of students %d: ", i+1);
        scanf("%d", &value[i]);
        sum=sum+value[i];        
    }
    printf("Total Marks: %.0f\n", sum);
    for (i=0;i<5;i++)
    {
        if(value[i]>max)
        {
            max = value[i];
        }
    }
    printf("Highest Marks: %d", max);
return 0;
}