#include<stdio.h>
#include<conio.h>
int main (){
    int students=3,subject=5;
    printf("enter no of students:-\n");
    scanf("%d", &students);
    printf("enter no of subjects:-\n");
    scanf("%d",&subject);
    //char str[5][15];
    //char str_1[0][15]="maths";
    //char str_1[1][15]="science";
    //char str_1[2][15]="geography";
    //char str_1[3][15]="history";
    //char str_1[4][15]="english";
    //printf("%s",str_1[1][15]);

    
    
    

    int students_database[students][subject];
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            printf("enter the %d students marks for %d subject :- \n",i+1,j+1);
            scanf("%d", &students_database[i][j]);
        }
        printf("---------------------------------------------\n");
        
    }
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            printf(" the  %d students marks for %d subject is :- %d  \n",i+1,j+1,students_database[i][j]);
            
        }
        printf("---------------------------------------------\n");
    }


    
    

return 0;
}

