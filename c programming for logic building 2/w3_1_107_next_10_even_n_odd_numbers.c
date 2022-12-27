#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    int ctr=0;
    int odd,even;
    printf("enter number:");
    scanf("%d",&n);
    printf("next ten even consecutive numbers are:-");
    for (int i = n;ctr<10 ; i++)
    {
        if (i%2==0)
        {
            ctr++;
            printf("%d",i);
            printf(" ");
        }
        
        
    }
    int otr=0;
    printf("\nnext ten odd consecutive numbers are:-");
    for (int i = n;otr<10 ; i++)
    {
        if (i%2!=0)
        {
            otr++;
            printf("%d",i);
            printf(" ");
        }
        
        
    }
    return 0;
    
    
}