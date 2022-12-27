#include<stdio.h>
#include<conio.h>
                    // nature of number whether its positive or negative or even or odd
int main(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    if (num>=0)
    {
        printf("%d number is positive",num);
        if (num%2==0)
        {
            printf("-even");
        }else{
            printf("-odd");
        }
        
    }
    else
    if (num<0)
    {
        printf("%d number is negative",num);
        if (num%2==0)
        {
            printf("-even");
        }else{
            printf("-odd");
        }
    }
    return 0;
    
    
    }