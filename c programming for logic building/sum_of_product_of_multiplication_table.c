#include<conio.h>
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("enter number:-");
    scanf("%d",&num);
    int table;
    for (int i = 1; i < 11; i++)
    {
        table=num*i;
        sum=sum+table;
        printf("%d x %d = %d\n",num,i,table);
    }
    printf("addtion of all products of multiplication table is :- %d",sum);
    return 0;
    
    


}    