#include <stdio.h>
#include <string.h>
int main() {
    char name[10];
    float Cal = 0.0;
    float Phy = 0.0;
    float Sci = 0.0;
    char grade[10]; 
    

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your Calculus score: ");
    scanf("%f", &Cal);

    printf("Enter your Physics score: ");
    scanf("%f", &Phy);

    printf("Enter your Science score: ");
    scanf("%f", &Sci);
        
    float avg = (Cal + Phy + Sci) / 3;
    if (avg >= 80){
        strcpy(grade, "A");
    }
    else if (avg < 80 && avg >= 70){
        strcpy(grade, "B");
    }
    else if (avg < 70 && avg >= 60){
        strcpy(grade, "C");
    }
    else if (avg < 60 && avg >= 50){
        strcpy(grade,"D");
    }
    else if (avg < 60 && avg >= 50){
        strcpy(grade, "F");
    }
    
    printf("%s, your average is %.2f. You got %s", name, avg, grade);
return 0;
}