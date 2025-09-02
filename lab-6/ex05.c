#include <stdio.h>
#include <string.h>
int main (){
    int i, totalM, totalS, total;
    struct dd
    {
        int m;
        int s;
    }time[4];
    for(i=0;i<3;i++){

    printf("Time %d input m ",i);
    scanf("%d",&time[i].m);
    printf("Time %d input s ",i);
    scanf("%d",&time[i].s);
}
    totalM = (time[0].m+time[1].m+time[2].m)*60;
    totalS = (time[0].s+time[1].s+time[2].s);
    total = totalM+totalS;
    printf("%d", total);
    return 0;
}