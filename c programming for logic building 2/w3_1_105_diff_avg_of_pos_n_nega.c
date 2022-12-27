#include<stdio.h>
#include<conio.h>
int main(){
    float a[7];
    float p_sum=0,n_sum=0;            //avrage of positive and negative numbwrs differenly
    int posi_count=0,nega_count=0;

    for (int i = 0; i < 7; i++)
    {
        printf("\nenter %d number: ",i+1);
        scanf("%f",&a[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        if (a[i]>=0)
        {
            p_sum=p_sum+a[i];
            posi_count++;
        }else{
            n_sum=n_sum+a[i];
            nega_count++;
        }
        
    }
    printf("\ncount of positiver number is :%d",posi_count);
    printf("\ncount of negative number is:%d",nega_count);
    float n_avg=n_sum/nega_count;
    float P_avg=p_sum/posi_count;
    printf("\naverage of negative numbers are:%.2f",n_avg);
    printf("\naverage of positive numbers:%.2f",P_avg);
    return 0;
}