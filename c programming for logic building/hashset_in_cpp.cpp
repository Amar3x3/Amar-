#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int n=5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)     // 
        {
            if (arr[i]==arr[j] && i!=n)
            { 
                printf(" arr i :%d   arr j : %d",arr[i],arr[j]);
                for (int k = j; k <n ; k++)
                {
                    arr[k]=arr[k+1];
                    printf("\n arr K : %d",arr[k]);
                }
                n--;
            }
            
        }
        

    }
    printf("\n after hashset :");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
     
    
}