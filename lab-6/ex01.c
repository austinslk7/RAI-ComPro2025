#include <stdio.h>

int main (){
    int i;
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
        printf("Student %d name is \"%s\", age %d,.",i, s[i].name, s[i].name, s[i].score);
    return 0;
    }
}
    
