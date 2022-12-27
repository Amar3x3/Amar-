#include<stdio.h>
#include<conio.h>
                        // check remainder 3 numbers from 2 to 100 from your entered input
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    printf("numbers with remainder 3 after divided by number %d are: ",n);
    for (int i = 1; i <= 100; i++)
    {
        if (i%n==3)
        {
            printf("%d",i);
            printf(" ");
        }
        
    }
    return 0;
    

}