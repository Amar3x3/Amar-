#include<stdio.h>
#include<conio.h>
  struct employe{
      char name[10];
      int salary;
  };
    int main(){
        FILE*ptr;
        struct employe player [2];
        printf("enter first employee name:-");
        scanf("%s",player[0].name);
        printf("enter ffirst employee salary:-");
        scanf("%d",&player[0].salary);
        // 2 employee
        printf("enter second employee name:-");
        scanf("%s",player[1].name);
        printf("enter second employee salary:-");
        scanf("%d",&player[1].salary);
        ptr=fopen("employee.txt","w");
        fprintf(ptr,"NAME\tSALARY\n");
        for (int i = 0; i < 2; i++)
        {
            fprintf(ptr,"%s\t  ",player[i].name);
            fprintf(ptr,"%d\n",player[i].salary);
        }
        fclose(ptr);
        return 0;

        


     
    }