#include<conio.h>
#include<stdio.h>
#include<math.h>   // call by value function call 
int sum(int x,int y){
    return x+y;
}
int main(){
    int num1,num2;
    printf("enter first num:-");
    scanf("%d",&num1);
    printf("enter second num:-");
    scanf("%d",&num2);
    printf("sum of both numbers is :-%d",sum(num1,num2));
    return 0 ;
}
