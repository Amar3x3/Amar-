#include<stdio.h>
#include<conio.h>
int main(){
    int marks[5];
    char name[5];
    float percentile[5];
    marks[0]=45;
    marks[1]=55;
    marks[2]=65;
    marks[3]=75;
    marks[4]=85;
    printf("enter:-");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);

    }
    printf("\n");
    printf("----------------------------------------------------\n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d",marks[i]);
        printf(" ");
    }
    

}