#include<stdio.h>
#include<conio.h>
void tentimes(int *num){
    printf("ten times entered num is :-%d",*num*10);
}
int main(){
    int num;
    printf("enter num :-");
    scanf("%d",&num);
    tentimes(&num);
    return 0;
    


}