#include<stdio.h>
#include<conio.h>
int main(){                      // sum of required number of even numbers  
    int n,r;
    int ctr=0;
    int sum=0;
    printf("enter where to starrt from : ");
    scanf("%d",&n);
    printf("enter how many even numers sum u want: ");
    scanf("%d",&r);
    for (int i = n;ctr<=r; i++)
    {
        if (i%2==0)
        {
            printf("%d",i);
            printf(" ");
            ctr++;
            sum=sum+i;
        }
    }
    printf("\nsum of these even numbers is: %d",sum);
    return 0;
}