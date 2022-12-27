#include<stdio.h>
#include<conio.h>
int main(){
    int r1,r2;
    int sum_even=0,sum_odd=0;
    printf("enter first range: ");
    scanf("%d",&r1);
    printf("enter second range: ");
    scanf("%d",&r2);
    for (int i = r1; i < r2; i++)
    {
        if (i%2==0)
        {
            sum_even=sum_even+i;
        }else{
            sum_odd=sum_odd+i;
        }    
    }
    printf("sum of all odd numbers within the given range is: %d",sum_odd);
    printf("\nsum of all even numbers within given range is: %d",sum_even);
    return 0;  
    /*int r1,r2;
    int ev_sq,od_sq;                        w3-1-109-SQ_OF_ODD_EVEN_BETN_RNGE
    int sum_even=0,sum_odd=0;
    printf("enter first range: ");
    scanf("%d",&r1);
    printf("enter second range: ");
    scanf("%d",&r2);
    for (int i = r1; i < r2; i++)
    {
        if (i%2==0)
        {
            ev_sq=i*i;
            printf("%d^2=%d",i,ev_sq);
            printf("\n");
            sum_even=sum_even+i;
        }else{
            od_sq=i*i;
            printf("%d^2=%d",i,od_sq);
            printf("\n");
            sum_odd=sum_odd+i;
        }    
    }
    return 0;*/
    

    }