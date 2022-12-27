#include<conio.h>
#include<stdio.h>
int main(){
    int num;
    
    
    printf("enter number:-");
    scanf("%d",&num);
    int table[10];
    for (int i = 0; i < 10; i++)
    {
        table[i]=num*(i+1);
        printf("%d x %d = %d\n",num,i+1,table[i]);
    
    }printf("---------------------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d",table[i]);
        printf(" ");
    }
    
    
    return 0;
}