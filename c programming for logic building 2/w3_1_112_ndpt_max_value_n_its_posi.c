#include<stdio.h>
#include<conio.h>
                        // maximum number and its position 
int main(){
    int a[7];
    int max=-1000;
    int posi;
    int b;
    printf("enter 7 numbers :-");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d",&a[i]);
        b=a[i];
        if (b>=max)
        {
            max=b;
            posi=i+1;   
        }   
    }
    printf("\nthe maximum number is :  %d and its poistion is :%d",max,posi);
    
    return 0;
    

}