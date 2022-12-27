#include<stdio.h>
#include<conio.h>
#include<string.h>
struct students_info
{
    int roll_no;
    char name[22];
    int marks;
};

int main(){
    int students_capacity;
    int opt;
    printf("enter capacity of class:-");
    scanf("%d",&students_capacity);
    struct students_info ptr[students_capacity];
    for (int i = 0; i < students_capacity; i++)
    {
        printf("\nenter name of student:- ");
        scanf("%s",ptr[i].name);
        printf("\nenter roll no of student:- ");
        scanf("%d",&ptr[i].roll_no);
        printf("\nenter marks of student:- ");
        scanf("%d",&ptr[i].marks);

    }
    printf("press 1 to show students info  \n OR \n  any other number to exit the program:-");
    scanf("%d",&opt);
    if (opt==1)
    {
          printf("roll no\t name\t marks\n");
        for (int i = 0; i < students_capacity; i++)
        {
        printf("%d\t",ptr[i].roll_no);
        printf("%s\t",ptr[i].name);
        printf("%d\t",ptr[i].marks);
        printf("\n");
        
    

        }
    }
    
    
    return 0 ;

    
}