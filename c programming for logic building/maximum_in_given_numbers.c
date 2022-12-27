#include<stdio.h>
#include<conio.h>
int main(){
    int num1,num2,num3;
     int max=0;
     printf("enter 1 no:-\n");
     scanf("%d",&num1);
     printf("enter 2 no ;-\n");
     scanf("%d",&num2);
     printf("enter 3 no:-\n");
     scanf("%d",&num3);
     if (num1>num2 && num1>num3)
     {
         max=num1;
     }else if (num2>num1 && num2>num3)
     {
         max=num2;
     }else if (num3>num1 && num3>num2)
     {
         max=num3;
     }
     printf("maximum no. is :-%d",max);
     return 0;
     
     



}