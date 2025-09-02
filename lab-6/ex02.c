#include <stdio.h>
#include <string.h>
int main (){
    int i;
    float bb;
    char cc[20];
    struct student{
        char name[20];
        int age;
        float score;
    } s[5];
    for (i=0;i<3;i++){
        printf("Student %d's name:",i+1);
        scanf("%s",s[i].name);
        printf("Student %d's age:",i+1);
        scanf("%d",&s[i].age);
        printf("Student %d's score:",i+1);
        scanf("%f",&s[i].score);
        printf("\n");
    }
    for (i=0;i<3;i++){
        if(s[i].score > bb){

            bb = s[i].score;
            strcpy(cc, s[i].name);
        }
    }
    printf("The highest score belongs to %s at %.1f!",cc, bb);
    return 0;
}