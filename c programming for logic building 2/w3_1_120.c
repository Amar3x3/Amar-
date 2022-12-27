#include<stdio.h>
#include<conio.h>
                        // print the required sequence
int main(){
    int n;
    printf("enter number to end sequence : ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (i==n)
        {
            printf("%d.",i);
        }else{
            printf("%d,",i);
            printf(" ");
        }
        
    }
    
    return 0;
    
}