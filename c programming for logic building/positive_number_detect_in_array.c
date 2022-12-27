#include<stdio.h>
#include<conio.h>
int main(){
    int c,positive_num=0,negative_num=0;
    printf("enter capacity for array:-");
    scanf("%d",&c);
    int arr[c];
    printf("enter elements in array :-\n");
    for (int i = 0; i < c; i++)
    {
       scanf("%d",&arr[i]);
    }

    for (int i = 0; i < c; i++)
    {
        if (arr[i]>0)
        {
            positive_num++;
        }else{
            negative_num++;
            }
    }
        printf("positive numbers count is:- %d\n",positive_num);
        printf("negative numbers count is:- %d\n",negative_num);
    
    
}