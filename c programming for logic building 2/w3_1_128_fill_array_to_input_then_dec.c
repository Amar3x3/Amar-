#include<stdio.h>
#include<conio.h>
int main(){
    int a[10];
    int n;
    int ctr=0;
    printf("enter any number between 1-10: ");
    scanf("%d",&n);
    
    for (int i = 0; i <n; i++)
    {
        a[i]=i;
        printf("a[%d]=%d\n",i,a[i]);
        ctr++;

    }
    for (int i = n; ctr<10; i--)
    {
       a[i]=i;
       printf("a[%d]=%d",ctr,i);
       printf("\n");
       ctr++;
    }
    return 0;
    
    
    
}